#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// 在try语句块中,在try语句块中被调用的函数 , 在函数栈中分配的局部变量,如果出现异常,会将栈内存中的所有局部变量自动析构;
//栈解旋的作用是确保程序在异常发生时能够安全退出,并释放占用的资源;如果不进行栈解旋,程序就会崩溃,并导致内存泄漏等问题;
class Student
{
public:
	Student() {
		cout << "调用构造函数" << endl;
	}
	~Student() {
		cout << "调用析构函数" << endl;
	}
};

// 1. 在 函数 中 抛出异常
void fun() {

	// 定义如下局部变量
	// 这些局部变量都在栈内存中
	// 如果在 try 代码块中调用该函数出现异常
	// 会自动释放栈内存中的局部变量
	Student s;

	cout << "开始抛出 char 类型 异常 " << endl;

	// 抛出一个 char 类型的异常
	throw 'A';
}

int main() {

	// 2. 捕获并处理异常
	try
	{
		// 调用可能产生异常的函数
		fun();
	}
	// 捕获一切未知类型的异常
	catch ( ... )
	{
		cout << "捕获到未知类型异常 ... "<< endl;
	}

	// 控制台暂停 , 按任意键继续向后执行
	system("pause");

	return 0;
};
