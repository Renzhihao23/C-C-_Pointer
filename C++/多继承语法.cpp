//#include<iostream>
//using namespace std;
//
//
//class father1
//{
//public:
//	father1()
//	{
//		m_A = 100;
//		
//	}
//	int m_A;
//	
//};
//
//class father2
//{
//public:
//	father2()
//	{
//	
//		m_A = 2000;
//		
//	}
//	
//	int m_A;
//};
//
//
//
//
//class son : public father1,public father2
//{
//public:
//	son()
//	{
//		m_C = 300;
//		m_D = 400;
//
//	}
//	int m_C;
//	int m_D;
//};
//
//
//
//
//
//void test01()
//{
//
//	son s;
//	cout << "sizeof son = " << sizeof(s) << endl;
//	//cout << "m_A" << s.m_A << endl;    (s.m_A不明确)
//	cout << "m_A = " << s.father1::m_A << endl;
//	cout << "m_A = " << s.father2::m_A << endl;
//}
//
//
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}