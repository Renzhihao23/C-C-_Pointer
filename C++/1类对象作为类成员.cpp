//#include<iostream>
//using namespace std;
//
////C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
////构造的顺序是：先调用对象成员的构造，再调用本类构造
//// 析构顺序与构造相反，可能是因为存储空间在栈上
////类对象作为类成员
//
//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone的构造函数调用" << endl;
//	}
//	string m_PName;
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//};
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)  //初始化列表  Phone m_Phone = pName
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	string m_Name;  //姓名
//
//	Phone m_Phone;//手机
//};
//
//void test01()
//{
//	Person p("张三", "iPhoneMax");
//
//	cout << p.m_Name << p.m_Phone.m_PName << endl;
//}
//
//
//int main(void)
//{
//	test01();
//	system("pause");
//	return 0;
//}