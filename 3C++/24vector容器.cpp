//vector可以动态扩展
#include<iostream>
using namespace std;
#include<vector>
void PrintVecter(vector<int>&v){
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    
}
// vector容器构造
void test01(){
    vector<int>v1; // 默认无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVecter(v1);
    cout << endl;

    // 通过区间方式进行构造
    vector<int>v2(v1.begin(), v1.end());
    PrintVecter(v2);
    cout << endl;

    // 拷贝构造
    vector<int>v3(v2);
    PrintVecter(v3);

}
int main(void){
    test01();
    return 0;
}