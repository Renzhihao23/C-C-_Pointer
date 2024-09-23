//纯虚函数语法 virtual 返回值类型 函数名 （参数列表） = 0；  当类中有了纯虚函数，这个类为抽象类
//抽象类特点： 无法实例化对象   子类必须重新抽象类中的纯虚函数，否则也属于抽象类
#include<iostream>
using namespace std;

//纯虚函数和抽象类
class Base{
public:
    virtual void func() = 0; //纯虚函数  只要有一个纯虚函数，为抽象类
};

class son:public Base{
    void func(){
        cout << "func函数调用" <<endl;
    }
};

void test01(){
    Base *base = new son;  //多态使用条件：父类指针或者引用指向子类对象
    base->func();
}

int main(void){
    test01();
    return 0;
}