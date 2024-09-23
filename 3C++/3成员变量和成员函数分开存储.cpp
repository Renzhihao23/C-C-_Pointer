//#include<iostream>
//using namespace std;
//
////成员变量和成员函数分开存储，只有非静态成员变量属于类的对象上
//class Person {
//	int m_A ; //非静态成员变量 属于类的对象上
//	static int m_B;     //不属于类的对象上
//	void func()         //不属于类的对象上
//	{ 
//	} 
//
//	static void func2() //不属于类的对象上
//	{
//	}
//};
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为：1
//	//c++编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每一个空对象也有独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//int main(void)
//{
//
//	test01();
//	system("pause");
//	return 0;
//}