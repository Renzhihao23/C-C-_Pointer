#include<iostream>
using namespace std;

//一、静态成员变量   1所有对象都共享同一份数据  2编译阶段分配内存  3类内声明，类外初始化操作*
class Person
{
public:
	static int m_A;  

	//int m_A = 1;
private:
	static int m_B;
};
int Person::m_A = 100;//类外初始化
int Person::m_B = 100;//类外初始化

void test01()
{
	Person p;
	cout << p.m_A << endl;//通过对象进行访问
	Person p2;
	p2.m_A = 200;   //所有对象都共享同一份数据,静态成员变量不属于某个对象上  //通过对象进行访问
	cout << p.m_A << endl;

	Person p3;
	cout << Person::m_A << endl;     //通过类名进行访问
	//cout << Person::m_B << endl;   //通过类名进行访问 私有权限类外访问不到

}




//二、静态成员函数   1所有对象共享同一个函数  2静态成员函数只能访问静态成员变量
class Phone
{
public:
	static void func()
	{
		cout << "static void func调用" << endl;
		m_C = 10;
	}
	static int m_C;//静态成员变量
};
int Phone::m_C = 100;


void test02()
{
	Phone p; //通过对象访问
	p.func();

	Phone::func(); //通过类名访问

	
}




int main(void)
{
	test02();
	system("pause");
	return 0;
}