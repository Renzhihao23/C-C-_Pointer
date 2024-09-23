#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#include <queue>

class ThreadPool {
public:
    // 构造函数
    ThreadPool(int numThreads) : stop(false) {
        for (int i = 0; i < numThreads; ++i) {
            // 创建线程
            threads.emplace_back([this] {
                while (true) {
                    std::function<void()> task;
                    {
                        // 锁定互斥量以保护共享资源
                        std::unique_lock<std::mutex> lock(mutex);
                        // 等待条件变量通知：有新的任务或线程池停止
                        condition.wait(lock, [this] { return stop || !tasks.empty(); });
                        // 如果接收到停止信号且任务队列为空，则退出循环结束线程
                        if (stop && tasks.empty()) {
                            return;
                        }
                        // 取出任务队列中的下一个任务
                        task = std::move(tasks.front());
                        tasks.pop();
                    } // 释放互斥量锁
                    // 执行取出的任务
                    task();
                }
            });
        }
    }

    // 析构函数
    ~ThreadPool() {
        {
            // 锁定互斥量以保护共享资源
            std::unique_lock<std::mutex> lock(mutex);
            // 设定停止标志为真，以便停止所有线程
            stop = true;
        }
        // 通知所有等待的线程
        condition.notify_all();
        // 等待所有线程完成
        for (std::thread& thread : threads) {
            thread.join();
        }
    }

    // 将任务添加到线程池的任务队列
    template<typename F, typename... Args>
    void enqueue(F&& f, Args&&... args) {
        // 通过绑定函数和参数来创建一个任务
        std::function<void()> task(std::bind(std::forward<F>(f), std::forward<Args>(args)...));
        {
            // 锁定互斥量以保护任务队列
            std::unique_lock<std::mutex> lock(mutex);
            // 将创建的任务添加到任务队列
            tasks.emplace(std::move(task));
        }
        // 通知一个等待的线程有新任务到来
        condition.notify_one();
    }

private:
    // 线程池中的所有线程
    std::vector<std::thread> threads;
    // 等待执行的任务队列
    std::queue<std::function<void()>> tasks;
    // 保护任务队列的互斥量
    std::mutex mutex;
    // 条件变量，用于任务通知
    std::condition_variable condition;
    // 停止标志，指示线程何时停止
    bool stop;
};

int main() {
    // 创建包含4个线程的线程池
    ThreadPool pool(4);
    // 向线程池提交8个任务
    for (int i = 0; i < 8; ++i) {
        pool.enqueue([i] {
            // 打印任务开始信息
            std::cout << "Task " << i << " is running in thread " << std::this_thread::get_id() << std::endl;
            // 任务执行休眠1秒，模拟耗时操作
            std::this_thread::sleep_for(std::chrono::seconds(1));
            // 打印任务完成信息
            std::cout << "Task " << i << " is done" << std::endl;
        });
    }
    // 主函数结束，线程池的析构函数会被调用，等待所有线程结束后程序退出
    return 0;
}