#include<iostream>
using namespace std;
//成员函数后加const称为常函数 常函数不可以修改成员属性  成员属性声明时加关键字mutable可以修改    常对象只能调用常函数

//常函数
class Person{
    public:
    // this 指针的本质 是指针常量 指针的指向是不可修改的
    // Person* const this;
    // 在成员函数后面加上const，修饰的是this指向，让指针指向的值也不可以修改
    void showPerson() const  // ==  const Person* const this;
    {
        this->m_B = 100;
        //this = NULL;// this指针不可以修改指针的指向的
    }
    int m_A;
    mutable int m_B; //特殊变量，在常函数中也可以修改这个值，加mutable关键字
};

// 常对象

void test01()
{   
    const Person p;  // 常对象
    p.m_A = 10;  // 值也不可以修改
    p.m_B = 10;
}




void test01()
{   
    Person p;
    p.showPerson();

}
int main(void)
{

	return 0;
}