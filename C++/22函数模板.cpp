#include<iostream>
using namespace std;
// 模板：建立通用的磨具，大大提升复用性
//交换两个整型函数
void swapInt(int &a, int &b)
{
	    int temp = a;
	    a = b;
		b = temp; 
}

//交换两个浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}


//函数模板
// template --- 声明一个模板    
// typename --- 表面其后面的符号是一种数据类型，可以用class代替
// T --- 通用数据类型
// 函数声明或定义
template<typename T>
void  mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	double c = 1.1;
	double d = 1.2;

	//利用函数模板交换
	//两种方式使用函数模板推导
	//1、自动类型推导
	mySwap(a, b);
	cout << a << " " << b << endl;


	//2、显示指定类型推导
	mySwap<double>(c, d);
	cout << c << " " << d << endl;
}
	
int main()
{
	test01();
	system("pause");
	return 0;
}