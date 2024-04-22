#include<iostream>
using namespace std;
#include<vector>

void PrintVecter(vector<int>&v){
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    
}

//赋值
void test01(){
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    PrintVecter(v1);
    cout << endl;

    //赋值 
    // 1.operator=
    vector <int>v2;
    v2 = v1;
    PrintVecter(v2);
    cout << endl;

    // 2.assign
    vector<int>v3;
    v3.assign(v1.begin(), v1.end());
    PrintVecter(v3);
}