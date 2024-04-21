#include<iostream>
using namespace std;
#include<string>
// 类模板：建立一个通用类，类中的成员 数据类型可以不具体指定，用一个虚拟的类型来代表

template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name:" << this->m_Name<<" "<< "age:" << this->m_Age << endl;
	}
    NameType m_Name;
    AgeType m_Age;

};


void test01()
{
	Person<string, int>p("张三", 11);
	p.showPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}