//#include<iostream>
//using namespace std;
//
////动物类
//class Animal 
//{
//public:
//	int m_Age;
//};
//
//
//
//
////利用虚进程 解决菱形继承的问题
//// 在继承之前 加上关键字 virtual 变成虚继承
//// //Animal类称之为虚基类
////羊类
//class Sheep :virtual public Animal
//{
//
//
//};
//
////驼类
//class Tuo :virtual public Animal
//{
//
//
//};
//
////羊驼类
//class SheepTuo : public Sheep,public Tuo
//{
//
//};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18; 
//	st.Tuo::m_Age = 28;
//	cout << sizeof(st) << endl;
//	cout <<"年龄:" <<st.Sheep::m_Age << endl;
//	cout << "年龄:"<<st.Tuo::m_Age << endl;
//	cout << "年龄:"<<st.m_Age << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}