// 1.文本文件 文本以ASCII码形式存储在计算机中
// 2.二进制文件 文件以二进制形式存储在计算机中
// 1.ofstream:写操作
// 2.ifstream:读操作
// 3.fstream:读写操作

//写文件 1.#include<fstream>  2.ofstream ofs  3.ofs.open("文件路径",打开方式) 4.ofs << "xxx" 5.ofs.close();
#include<iostream>
using namespace std;
#include<fstream>
void test01(){
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs << "Stack" << endl;
    ofs << "Stack" << endl;
    ofs << "Stack" << endl;
    ofs.close();
}
// 读文件
void test02(){
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (!ifs.is_open())
    {
        cout << "fail!" <<endl;
        return;
    }
    // 读数据
    char buf[1024] = {0};
    while (ifs >> buf)
    {
        cout << buf << endl;
    }
    ifs.close();
}
int main(void){
    test01();
    test02();
    return 0;
}