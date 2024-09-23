//#include<iostream>
//using namespace std;
//
////构造函数的调用规则
////1. 创建一个类，C++编译器会给每个类至少添加3个函数
////默认构造
////析构函数
////拷贝构造 (对类的属性做一个拷贝)
//
////2. 如果我们写了有参构造函数，编译器就不再提供默认构造，但仍热提供拷贝构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
//	Person(const Person &p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << p2.m_Age << endl;
//}
//
//
//int main(void)
//{
//	test01();
//	system("pause");
//	return 0;
//}