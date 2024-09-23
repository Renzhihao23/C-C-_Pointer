#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[10];
    char* b[10];
    int* p;
    char** p2;
    p = a;
    p2 = b;
    cout << p << "  " << (p+2) << endl;
    cout << p2 << "  " << (p2+2);
    return 0;
}
