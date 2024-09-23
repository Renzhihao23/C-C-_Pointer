// 提供异常是为了将问题检测和问题处理相分离 基本思路：让一个函数在发现了自己无法处理的错误时抛出（throw）一个异常，然后它的（直接或者间接）调用者能够处理这个问题。

// 抛出时，最好抛出匿名对象 他的生命周期在catch里面
#include<iostream>
#include<string.h>
using namespace std;
int sub(int x, int y)
{
    if(y = 0);
    {
        throw 1; // 处理异常 抛出异常 抛出一个数据类型 
    }
    return x / y;
}

void test01()
{
    // 尝试捕获异常
    try
    {
        sub(2, 0);
    }
    catch(int)
    {
        cout << "int abnormal !!" << endl;
        // throw 2 再次抛出异常
    }
    catch(char)
    {
        cout << "char abnormal !!" << endl;
    }
    catch(double)
    {
        cout << "double abnormal !!" << endl;
    }
    catch(...) // 捕获其他类型的异常
    {
        
    }
}

int main()
{
    test01();
    return 0;
}