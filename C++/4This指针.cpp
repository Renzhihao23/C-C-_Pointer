#include<iostream>
using namespace std;


//this用途
//当形参和成员变量同名时，可用this指针来区分
// 
// 
//在类的非静态成员函数中返回对象本身，可以使用return *this

class Person {
public:
	Person(int age)
	{
		this->age = age;//this指针指向的是被调用函数所属的对象
	}
	Person& PersonAddAge(Person &p)
	{
		this->age += p.age;
		return *this;   //*this ==  p2   
	}
	int age;

};

void test01()
{
	Person p1(18);
	cout << p1.age << endl;
}

void test02()
{
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1);
	cout << p2.age << endl;

}
int main(void)
{
	test01();

	test02();

	system("pause");
	return 0;
}