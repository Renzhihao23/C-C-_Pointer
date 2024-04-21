#include<iostream>
using namespace std;

//继承中先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//静态成员变量  所有对象都共享同一份数据 编译时就分配内存  类内声明 类外初始化
//静态成员函数  只能访问静态成员变量 不能访问非静态成员变量

//访问子类同名成员 直接访问即可    访问父类同名成员 需要加作用域
class father
{
public:

	static int m_A;

	static void func(int a)
	{
		cout << "father - static void func()" << endl;
	}
};
int  father::m_A = 100;


class son : public father
{
public:
	
	static int 	m_A ;

	static void func()
	{
		cout << "son - static void func()" << endl;
	}
	
};
int  son::m_A = 300;


void test0() {
	//1.通过对象访问
	son s;
	cout << "通过对象访问：" << endl;
	std::cout << "son    下 m_A = " << s.m_A << std::endl;
	std::cout << "father 下 m_A = " << s.father::m_A << std::endl;

	//2.通过类名访问
	cout << "通过类名访问：" << endl;
	std::cout << "son    下 m_A = " << son::m_A << std::endl;

	//第一个双冒号代表通过类名方式访问  第二个双冒号代表父类作用域下
	std::cout << "father 下 m_A = " <<son::father::m_A << std::endl;
}


//同名静态成员函数
void test02()

{//1.通过对象访问
	son t;
	cout << "通过对象访问：" << endl;
	t.func();
	t.father::func(100);

//2.通过类名访问
	cout << "通过类名访问：" << endl;
	son::func();

	//子类出现和父类同名的静态函数，也会隐藏父类中同名成员函数
	//如果想访问父类被隐藏同名成员，需要加作用域
	father::func(100);
	son::father::func(100);
}

int main()
{
	test02();
	
	system("pause");
	return 0;
}