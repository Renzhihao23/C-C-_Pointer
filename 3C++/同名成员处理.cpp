//#include<iostream>
//using namespace std;
////继承中的同名成员处理
//
//class father
//{
//public:
//	father()
//	{
//		 m_A = 100;
//	}
//	void func()
//	{
//		cout << "father—func（）调用" << endl;
//	}
//	int m_A;
//};
//
//class son : public father
//{
//public:
//	son()
//	{
//		 m_A = 200;
//	}
//	void func()
//	{
//		cout << "father—func（）调用!!!!" << endl;
//	}
//	int m_A;
//};
//
//void test0() {
//
//	son b;
//	std::cout << "m_A = " << b.m_A << std::endl;     
//	std::cout << "m_A = " << b.father::m_A << std::endl;
//}
//
//void test02()
//
//{
//	son s;
//	s.func();
//	s.father::func();
//}
//
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}