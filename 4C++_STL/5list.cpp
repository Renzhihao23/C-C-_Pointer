#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
// List 是一个双向链表 采用动态存储分配，不会造成内存浪费和溢出，链表执行插入和删除操作非常方便，只需修改指针即可

// list容器的迭代器是双向迭代器 不支持+2 支持++
void printListInt(list<int> l)
{
    list<int>::iterator it = l.begin();
    for(; it!=l.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{   
    list<int> l1;
    l1.push_back(12);
    l1.push_back(13);
    l1.push_back(14);
    l1.push_front(130);
    l1.push_front(120);
    l1.push_front(13); //  13 120 130 12 13 14
    list<int>::iterator it = l1.begin();
    it++;
    it++;
    // list容器的迭代器是双向迭代器 不支持+2 支持++
    //l1.insert(it, 3, 100); //13 120 100 100 100 130 12 13 14
    l1.insert(++it, 3, 100);  //13 120 130 100 100 100 12 13 14
    // 错误：it.insert(it+2, 3, 100)

    // STL提供的算法，只支持随机访问迭代器 而list是双向迭代器 所以sort不支持list
    // sort(l1.begin(), l1.end());
    l1.sort();
    printListInt(l1);

    // 反转
    l1.reverse();
    printListInt(l1);
}

int main()
{
    test01();
    return 0;
}