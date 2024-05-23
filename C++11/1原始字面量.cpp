#include<iostream>
#include<string>
using namespace std;

//在C++11中添加了定义原始字符串的字面量，定义方式为：R “xxx(原始字符串)xxx”其中（）两边的字符串可以省略。原始字面量R可以直接表示字符串的实际含义，而不需要额外对字符串做转义或连接等操作。

//比如：编程过程中，使用的字符串中常带有一些特殊字符，对于这些字符往往要做专门的处理，使用了原始字面量就可以轻松的解决这个问题


int main()
{
    string str1 = R"(D:\hello\world\test.text)";
    cout << str1 << endl;
    string str2 = R"lufy(D:\hello\world\test.text)lufy";
    cout << str2 << endl;

    // string str3 = R"luffy(D:\hello\world\test.text)robin";	// 语法错误，编译不通过
    // cout << str3 << endl;


    return 0;
}
