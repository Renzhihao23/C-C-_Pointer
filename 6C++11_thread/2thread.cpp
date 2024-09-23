#include<iostream>
#include<thread>
#include<memory>
using namespace std;
class MyClass{
private:   //public protected private
    friend void thread_Print();
    void Print(){
        cout << "hello" << endl;
    }
};
void thread_Print(){
    shared_ptr<MyClass> a = make_shared<MyClass>();
    thread t(&MyClass::Print, a);
    t.join();
}

int main(){
    thread_Print();
    return 0;
}