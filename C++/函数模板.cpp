//#include<iostream>
//using namespace std;
//
//
////函数模板
//
//////交换两个整型函数
////void swapInt(int &a, int &b)
////{
////	    int temp = a;
////	    a = b;
////		b = temp; 
////}
////
////
//////交换两个浮点型函数
////void swapDouble(double& a, double& b)
////{
////	double temp = a;
////	a = b;
////	b = temp;
////}
//
//
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T为通用数据类型
//void  mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	double c = 1.1;
//	double d = 1.2;
//
//	//利用函数模板交换
//	//两种方式使用函数模板推导
//	//1、自动类型推导
//	mySwap(a, b);
//	cout << a << " " << b << endl;
//
//
//	//2、显示指定类型推导
//	mySwap<double>(c, d);
//	cout << c << " " << d << endl;
//}
//	
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}