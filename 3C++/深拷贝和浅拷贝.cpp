//#include<iostream>
//using namespace std;
//
////堆区开辟的数据，由程序员手动释放，手动开辟
//// 浅拷贝带来的问题就是堆区的内存重复释放
////解决方法：深拷贝，再在堆区申请内存，自己实习拷贝构造函数
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a, int high)
//	{
//		cout << "Person的有参构造函数调用" << endl;
//		M_Age = a;
//		M_Height = new int(high);  //用指针接收堆区的数据  new创建返回的是一个地址（这个地址保存了High的值）
//	}
//	Person(const Person& p)   //深拷贝内容：自己写拷贝构造函数，进行深拷贝，重新在堆区开辟空间
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		M_Age = p.M_Age;
//		M_Height = new int(*p.M_Height); //堆区的数据，手动开启，手动释放，new创建返回的是一个地址（这个地址保存了p.m_Height的值）
//	}
//	~Person()     //析构代码， 将堆区开辟数据做释放操作
//	{
//		cout << "Person的析构函数调用" << endl;
//		if (M_Height != NULL)   //m_Height为指针变量
//		{
//			delete M_Height;
//			M_Height = NULL;
//		}
//	}
//
//	int M_Age;          	// 指针指向身高，为什么用指针？因为要把身高数据开辟到堆区（new）
//	int* M_Height;			//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题！！！！
//
//};                  
//
//
//void test01()
//{
//	Person p1(18, 160);
//	Person p2(p1);
//
//	cout << "p1的年龄：" << p1.M_Age << " 身高：" << *p1.M_Height << endl;
//	cout << "p2的年龄：" << p2.M_Age << " 身高：" << *p2.M_Height << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}