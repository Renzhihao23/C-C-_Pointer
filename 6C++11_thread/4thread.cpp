#include<iostream>
#include<thread>
using namespace std;
#include<mutex>
mutex m1, m2;

void func(){
    for (int i = 0; i < 50; i++){
        m1.lock();
        m2.lock();
        m1.unlock();
        m2.unlock();   
    }

}
void func_2(){
    for (int i = 0; i < 50; i++){
        m1.lock();
        m2.lock();
        m1.unlock();
        m2.unlock(); 
    }  
}
int main(void){
    thread t1(func);
    thread t2(func_2);

    t1.join();
    t2.join();
    cout << "over" << endl;
    return 0;
}