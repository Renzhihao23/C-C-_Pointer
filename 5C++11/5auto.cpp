#include<iostream>
#include<map>
#include<string>

using namespace std;
class T1
{
public:
    static int get(){
        return 10;
    }
};
class T2
{
public:
    static string get(){
        return "hello, world";
    }
};

template <class A>
void func(void){
    auto val = A::get();
    cout << "val: " << val << endl;
}


int main(void){

    auto x = 3.14;      // x 是浮点型 double
    auto y = 520;       // y 是整形 int
    auto z = 'a';       // z 是字符型 char
    // auto nb;            // error，变量必须要初始化
    // auto double nbl;    // 语法错误, 不能修改数据类型
    // 当变量不是指针或者引用类型时，推导的结果中不会保留const、volatile关键字
    // 当变量是指针或者引用类型时，推导的结果中会保留const、volatile关键字


    map<int, string> person;
    person.insert(make_pair(1, "ace"));
    person.insert(make_pair(2, "sabo"));
    person.insert(make_pair(3, "luffy"));
//  map<int, string>::iterator it = person.begin();
    auto it = person.begin();  // 化简
    for (; it != person.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;;
    }


    func<T1>();
    func<T2>();
    return 0;


}