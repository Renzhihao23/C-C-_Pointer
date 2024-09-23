//多态的优点：1.代码组织结构清晰  2.可读性强 3.利于前期和后期的扩展以及维护
#include<iostream>
using namespace std;
//实现计算机抽象类
class AbstractCalculator{
public:
    virtual int getResult(){ //父类中，函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定为父类重命名函数的调用
        return 0;
    }
    int m_Num1;
    int m_Num2; //操作数1  操作数2
};

class MulCalculator:public AbstractCalculator{
public:
    int getResult(){
        return m_Num1 * m_Num2;
    }
};
class AddCalculator:public AbstractCalculator{
public:
    int getResult(){
        return m_Num1 + m_Num2;
    }
};
class SubCalculator:public AbstractCalculator{
public:
    int getResult(){
        return m_Num1 - m_Num2;
    }
};
class DviCalculator:public AbstractCalculator{
public:
    int getResult(){
        return m_Num1 / m_Num2;
    }
};
void test01(){
    //多态使用条件：父类指针或者引用指向子类对象
    //加法运算
    AbstractCalculator* abc = new AddCalculator; // 1.AbstractCalculator* abc;   2.abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout <<abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 9;
    cout << abc->getResult();
    delete abc;
}
int main(void){
    test01();
    return 0;
}