//#include<iostream>
//using namespace std;
//
//
////1. 可以自己控制读写权限
////2. 对于写可以检测数据有效性
//class Person
//{
//public:
//	void setName(string name)// 设置名字  可写
//	{
//		m_Name = name;
//	}
//	void setIdol(string idol)// 设置偶像  可写
//	{
//		m_Idol = idol;
//	}
//	string getName() // 获取名字  可读
//	{
//		return m_Name;
//	}
//	int getAge() // 获取名字  可读
//	{
//		return m_Age;
//	}
//private:
//	string m_Name; // 可读可写
//
//	int m_Age = 18;    // 只读
//
//	string m_Idol; // 只写
//};
//
//int main(void)
//{
//	Person p1;
//	p1.setName("zhangshan");
//	cout << "name:" << "" << p1.getName() << endl;
//	cout << "age:" << "" << p1.getAge() << endl;
//	system("pause");
//	return 0;
//}