#include<iostream>
using namespace std;
#include<fstream>
// 以二进制的方式对文件进行读写操作  打开方式要指定为ios::binary
// 写文件write函数原型: ostream& write(const char* buffer, int len)  字符指针buffer指向内存中一段存储空间，len是读写的字节数
// 读文件read函数原型: istream& read(char* buffer, int len)
class Person{
public:
    char m_Name[64];
    int m_Age;
};

void test01(){
    ofstream ofs;
    ofs.open("person.txt",ios::out|ios::binary);

    Person p = {"Stack", 18};
    ofs.write((const char*)&p, sizeof(Person));
    ofs.close();
}
void test02(){
    ifstream ifs;
    ifs.open("person.txt", ios::in|ios::binary);
    if (!ifs.is_open())
    {
        cout << "fail" << endl;
        return;
    }
    Person p;
    ifs.read((char*)&p, sizeof(Person));
    cout << "name:" << p.m_Name << "age:" << p.m_Age;
    ifs.close();
  
}
int main(void){
    test01();
    test02();
    return 0;
}