#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class MyExecption
{
public:
    virtual void error() = 0;
};

class OutOfRange:public MyExecption
{
public:
    void error()
    {
        cout << "out of range" << endl;
    }
};

class BadCast:public MyExecption
{
public:
    void error()
    {
        cout << "bad cast" << endl;
    }
};
void fun()
{
    //throw OutOfRange();
    throw BadCast();
}

void test01()
{
    try
    {
        fun();
    }
    catch(MyExecption &p)
    {
        p.error();
    }
}