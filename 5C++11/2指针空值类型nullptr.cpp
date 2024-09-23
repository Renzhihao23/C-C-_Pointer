#include <iostream>
using namespace std;

void func(char *p)
{
    cout << "void func(char *p)" << endl;
}

void func(int p)
{
    cout << "void func(int p)" << endl;
}

int main()
{
    func(nullptr);
    func(250);
    return 0;
}


