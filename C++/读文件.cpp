//#include<iostream>
//using namespace std;
//#include<fstream>  //头文件包含
//#include<string>
//#include<sstream>
//void test01()
//{
//	//1. 包含头文件
//	//2.创建流对象
//
//	ifstream ifs;
//
//	//3.指定我们打开的方式
//	ifs.open("test.txt",ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4.读数据
//	//第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) //     ">>"为输入运算符
//	//{
//	//	cout << buf << endl;
//	//}
//	//第二种
//	//char buf[1024] = {0};
//	//while (ifs.getline(buf,sizeof(buf)))  //一行一行读取
//	//{
//	//	cout << buf << endl;
//	//}
//	//第三种
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;;
//	}
//;
//	//5.关闭文件
//	ifs.close();
////	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}