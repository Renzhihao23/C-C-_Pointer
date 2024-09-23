#include <iostream>
#include <vector>
#include<map>
#include<string>
#include<set>
using namespace std;

int main(void)
{
    vector<int> t{ 1,2,3,4,5,6 };
    for (auto it = t.begin(); it != t.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    for ( const auto &value : t){
        cout << value << " ";
    }
    cout << endl;
    for (auto &value : t){
        cout << ++value << " ";
    }
    cout << endl;
    

    map<int, string> m{
        {1, "lucy"},
        {2, "lily"},
        {3, "tom"}
    };

    // 基于范围的for循环方式
    for (auto& it : m)
    {
        cout << "id: " << it.first << ", name: " << it.second << endl;    // 指针
    }

    // 普通的for循环方式
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << "id: " << it->first << ", name: " << it->second << endl;  // 对象
    }

    set<int> st{ 1,2,3,4,5,6 };
    for (auto &item : st) 
    {
        // cout << item++ << endl;		// error, 不能给常量赋值
    }
    return 0;

}

