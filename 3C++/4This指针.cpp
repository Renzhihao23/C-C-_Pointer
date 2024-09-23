#include<iostream>
using namespace std;


//this用途
// 1.当形参和成员变量同名时，可用this指针来区分，解决名称冲突
// 2.在类的非静态成员函数中返回对象本身，可以使用return *this
// 静态成员函数与非静态成员函数的区别
// 两者的区别在于:
// 非静态的函数由类对象(加.或指针加->;)调用,这时将向函数传递this指针.而静态函数由类名或对象名调用。
// 但静态函数不传递this指针,不识别对象个体,所以通常用来对类的静态数据成员操作。

// 类的静态成员(变量和方法)属于类本身，在类加载的时候就会分配内存，可以通过类名直接去访问；
// 非静态成员（变量和方法）属于类的对象，所以只有在类的对象产生（创建类的实例）时才会分配内存，然后通过类的对象（实例）去访问。
class Person {
public:
	Person(int age)
	{
		this->age = age;//this指针指向的是被调用函数所属的对象(28行的p1)
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