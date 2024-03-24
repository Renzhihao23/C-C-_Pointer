//#include<iostream>
//using namespace std;
//
//
////C++中拷贝构造函数调用时机
//
//
//class Person
//{
//public:
//	Person() {
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age) {
//		m_Age = age;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << p2.m_Age << endl;
//}
//
//
////2. 值传递的方式给函数参数传值
//void do_Work(Person p)
//{
//}
//void test02()
//{
//	Person p;
//	do_Work(p);
//
//}
//
//
////3. 值方法返回局部对象
//Person do_Work02() 
//{
//	Person p1;  //p1是局部变量
//	return p1;
//}
//void test03()
//{
//	Person p = do_Work02();  //创造拷贝构造函数给对象p
//}
//
//
//
//int main(void)
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
