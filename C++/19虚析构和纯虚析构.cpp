//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用子类的析构代码
//解决方法：将父类中的析构函数改为虚析构或者纯虚析构
#include<iostream>
using namespace std;
#include<string>

//虚析构和纯虚析构
class Animal{
    public:
    Animal(){
        cout << "Animal构造函数调用" << endl;
    }
    // ~Animal(){
    //     cout << "Animal析构函数调用" << endl;
    // }
    // 纯虚析构 需要声明也需要实现
    // 有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;
    //纯虚函数
    virtual void speak() = 0;

};
Animal::~Animal(){
    cout << "Animal析构函数调用" << endl;
}

class Cat:public Animal{
    public:
    //有参构造函数
    Cat(string name){
        m_Name = new string(name);
        cout << "Cat构造函数调用" << endl;
    }
    virtual void speak(){
        cout << *m_Name << "cat speaking" << endl;
    }
    //利用虚析构可以解决父类指针释放子类对象时不干净的问题
    virtual ~Cat(){
        if (m_Name != NULL)
        {
            cout << "Cat析构函数调用" << endl;
            delete m_Name;
            m_Name == NULL;
        }
        
    }
    string* m_Name;
};
void test01(){
    Animal* animal = new Cat("Tom");
    animal->speak();
    delete animal;
}

int main(void){
    test01();
    return 0;
}