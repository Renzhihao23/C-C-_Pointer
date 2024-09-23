#include <iostream>
#include <functional>
using namespace std;

class Test
{
public:
    void output(int x, int y)
    {
    //    auto x1 = [] {return m_number; };                      // error
        auto x2 = [=] {return m_number + x + y; };             // ok
        auto x3 = [&] {return m_number + x + y; };             // ok
        auto x4 = [this] {return m_number; };                  // ok
    //    auto x5 = [this] {return m_number + x + y; };          // error
        auto x6 = [this, x, y] {return m_number + x + y; };    // ok
        auto x7 = [this] {return m_number++; };                // ok
    }
    int m_number = 100;
};

void func(int x, int y){
     int a = 9;
    int b = 10;
    [=, &x](int z)mutable{
        int c = a;
        int d = x;
        b++; // 加了mutable
        cout << b << endl;
        cout << z << endl;
    }(88);
    cout << b << endl;
}
int main(void){
    func(1, 2);
    return 0;
}