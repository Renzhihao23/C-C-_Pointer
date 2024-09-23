#include<iostream>
#include<thread>
using namespace std;
#include<mutex>
int a = 0;
mutex mtx;
void func(){
    for (int i = 0; i < 10000; i++)
    {
        mtx.lock();
        a += 1;
        mtx.unlock();
    }
    
}
int main(void){
    thread t1(func);
    thread t2(func);

    t1.join();
    t2.join();
    cout << a << endl;
    return 0;
}