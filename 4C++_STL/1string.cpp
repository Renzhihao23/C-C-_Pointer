#include <iostream>
#include <string>
using namespace std;
void test01()
{
    string str1 = "hello world";
    str1.at(1);
    str1[1];
    str1.assign("hell", 5);
    string str2 = "";
    str2 = str1;
    string str3;
    str3 = str2 + str1;
    str3.append(str2, 2, 3); // 把str2的第二位的三个字节加到str3的结尾
    int ret = str1.find("wor");
    str1.replace(ret, 3, "***");
    ret = str1.compare(str2);
    ret = (str3 > str1); 
}
void test02()
{
    string str1 = "sdfsdfsadf:fsdfasdf:fdsfsgjdiasjf";
    int pos = 0;
    while (1)
    {
        int ret = str1.find(":", pos);//查找 str第一次出现位置,从 pos开始查找
        if (ret < 0)
        {
            string temp = str1.substr(pos, str1.size() - pos);
            cout << temp << endl;
            break;
        }
        string temp = str1.substr(pos, ret-pos); // substr返回由 pos开始的 n个字符组成的字符串
        cout << temp << endl;
        pos = ret + 1;
    }
    
}
void test03()
{
    string str1 ="ssdfsd";
    int pos = 0;
    str1.insert(pos, "sjd");
    str1.erase(pos, 2);
    cout << str1 ;

    //string 转 char*
    string str = "itcast";
    const char* cstr = str.c_str();
    //char* 转 string
    char* s = "itcast";
    string str(s);
}
int main()
{
    test03();
    return 0;
}