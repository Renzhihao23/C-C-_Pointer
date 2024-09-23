#include<iostream>
using namespace std;

// 编写一个Circle类，它根据实例化时提供的半径计算面积和周长。将一个pi包含在一个私有成员常量中，该常量不能在类外访问

class Circle{
    const double PI;
    double radius;

public:
    Circle(double Inputradius):radius(Inputradius),PI(3.14159){}
    double GetCircumference(){
        return 2*PI*radius;
    }
    double GetArea(){
        return PI*radius*radius;
    }
};
int main(int argc, char const *argv[])
{
        cout << "Enter a radius:" << endl;
    double radius = 0;
    cin >> radius;
    Circle MyCircle(radius);
    cout <<  "Circumference : " << MyCircle.GetCircumference() <<endl;
    cout << "Area: " << MyCircle.GetArea() << endl;
    return 0;
}

