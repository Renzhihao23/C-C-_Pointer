#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// set容器的迭代器是只读迭代器，set不允许两个元素有相同的键值 multiset与set唯一不同就是可以修改键值
// set容器 key值和value是相同的   map容器key值和value是不同的

void printfSetInt(set<int, MyGreaterSort> &s)
{
    set<int, MyGreaterSort>::const_iterator it = s.begin();
    for(; it!= s.end(); it++)
    {
        cout << *it << "";
    }
    cout << endl;
}
// 仿函数：重载函数调用运算符（）的类    即是函数又是类型
class MyGreaterSort
{
    public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};
void test01()
{
    set<int, MyGreaterSort> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(60);
    s1.insert(50);
}
void test02()
{
    // 查找
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(60);
    s1.insert(50);
    set<int>::iterator key = s1.begin();
    key = s1.find(50);
    if (key != s1.end())    
    {
        cout << "找到结果为：" << *key << endl;
    }
}
int main()
{
    test01();
    return 0;
}