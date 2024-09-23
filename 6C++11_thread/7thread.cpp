#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<condition_variable>
using namespace std;

queue<int> g_queue;
condition_variable g_cv;
mutex mtx;
void Producer(){
    for (int i = 0; i < 10; i++){
        unique_lock<mutex> lock(mtx);
        g_queue.push(i);
        g_cv.notify_one();
        cout << "Producer: " << i << endl;
        
    }  
    this_thread::sleep_for(chrono::seconds(1));  
}

void Consumer(){
    while (1)
    {
        unique_lock<mutex> lock(mtx);
        g_cv.wait(lock, [] (){return !g_queue.empty();});
        int value = g_queue.front();
        g_queue.pop();
        cout << "Consumer: " << value << endl;
    }   
}
int main(void){
    thread t1(Producer);
    thread t2(Consumer);
    t1.join();
    t2.join();

    return 0;
}