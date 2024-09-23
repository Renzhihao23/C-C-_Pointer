//#include<iostream>
//using namespace std;
//
//
////1.构造函数的分类及调用
////分类
//// 按参数分类  无参构造  和  有参构造
//// 按类型分类  普通构造  和  拷贝构造
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造（默认构造）函数调用" << endl;
//	}
//
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造函数调用" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p1)   //拷贝对象p       使用方法：加const 用引用的方法拷贝进来
//	{
//		//讲传入的p1身上的所有属性，拷贝到我身上
//		age = p1.age;
//		cout << "拷贝构造函数调用" << endl;
//	}
//
//
//
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//
//	int age;
//};
//
//
//
//void test01()
//{
//	//1. 括号法
//	//Person p; //默认析构调用
//	//Person p1(10);
//	//Person p2(p1); // 拷贝构造函数调用
//
//	//cout << p1.age << endl;
//	//cout << p2.age << endl;
//	
//
//	////2. 显示法
//	//Person p;//默认构造函数
//	//Person p1 = Person(10);//有参构造函数
//	//Person p2 = Person(p1); //拷贝构造函数
//
//	//Person(10);  //Person（10）单独拿出来叫匿名对象  特点：当前执行结束后，系统会立刻回收掉匿名对象,不会等test01结束后才回收
//	//             //不要利用拷贝函数 初始化匿名对象   编译器会认为Person （p2）等价于Person p2   以为生成一个默认构造，与拷贝构造重定义都是p2
// //
//
//	//3. 隐式转换法
//	Person p1 = 10;  //等价于Person p1 = Person(10)
//	Person p2 = p1;
//}
//// test01结束后，创建的对象被释放
//int main(void)
//{
//	test01();
//	system("pause");
//	return 0;
//
//}