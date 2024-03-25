#include<iostream>
using namespace std;


class Person{
public:
    void zhi()
    {
        if(this == NULL)
        return;
        cout << age ;
    }
    int age = 1;
};
//空指针调用成员函数
void test()
{
    Person* p = NULL;
    p->zhi();
}


int main(void)
{
    test();
	return 0;
}