//#include<iostream>
//using namespace std;
//#include<fstream>  //头文件包含
//
//class Person
//{
//public:
//	char m_Name[10];
//	int m_Age;
//};
//
//
//void test01()
//{
//
//	//1.包含头文件
//	//2.创建流对象 //3.打开文件
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3.打开文件
//	//ofs.open("person.txt", ios::out | binary);
//	
//	//4.写文件
//	Person p = { "张三", 18};
//	ofs.write((const char*)&p, sizeof(Person));
//
//		//5.关闭文件
//		ofs.close();
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}