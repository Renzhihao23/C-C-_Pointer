#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<condition_variable>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

class ThreadPool{

private:
    vector<thread> threads;
    queue<function<void()>> tasks;

    mutex mtx;
    condition_variable condition;

    bool stop;

};