#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;

static once_flag logOnceFlag; // 更改了命名，避免与 `std::log` 冲突
static Log* logInstance = nullptr;  // 更改了命名以改善可读性

class Log {
public:
    Log() {};

    Log(const Log& log) = delete;
    Log& operator=(const Log& log) =  delete;
    
    static Log& GetInstance() {
        call_once(logOnceFlag, init);  // 使用更新的名称
        return *logInstance;  // 使用更新的名称
    }

    static void init() {
        if (!logInstance) logInstance = new Log;  // 使用更新的名称
    }

    void PrintLog(string msg){
        cout << msg << endl;
    }
};

void print_error() {
    Log::GetInstance().PrintLog("error");
}

int main() {
    thread t1(print_error);
    thread t2(print_error);
    t1.join();
    t2.join();

    return 0;
}