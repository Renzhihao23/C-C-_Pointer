#include <iostream>
#include <deque>
using namespace std;

// deque容器是以动态分段连续空间组成，没有容量的概念
// deque是双端队列（double ended queue）
void printfDequeInt(deque<int> &d)
{
    deque<int>::iterator it = d.begin();
    for(; it != d.end();it++ )
    {
        cout << *it <<" ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    // 插入
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_front(4);
    d1.push_front(5);
    d1.push_front(6);
    printfDequeInt(d1); // 6 5 4 1 2 3
    //cout << d1.size;
    // 删除
    d1.pop_back();
    d1.pop_front();
    // 增加
    d1.insert(d1.begin() + 1, 3, 100);
    // 改
    d1.at(2) = 101;
    d1[3] = 202;
}

int main()
{
    test01();
    return 0;
}