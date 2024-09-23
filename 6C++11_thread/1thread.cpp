#include <iostream>
#include <thread>
#include <string>
using namespace std;
void printfHelloWorld(string msg){
    //cout << msg << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << i;
    }
    cout << endl;
}
int main(){
    thread thread1(printfHelloWorld,"hello World");
    bool isJoin = thread1.joinable();

    if (isJoin)
    {
        thread1.join();
    }
    cout << "over" << endl;
    return 0;
    
}