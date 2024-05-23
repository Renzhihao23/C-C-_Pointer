#include<iostream>
using namespace std;

struct T
{
    int a ;
};
void fun(const int num){
    constexpr T t{100}; // a初始化100，并作为常量
    // t.a = 1000;  // 常量不可以被修改
}