#include<iostream>
using namespace std;


int main(void){
    char* e;
    int* b;
    float* c;
    cout << sizeof(e) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << int(e) << endl;
    cout << int(e) << endl;
    const char* a[2] = {"aa", "bb"};

    char d = 87;

    a[1] = &d;
    cout << *a[1] << endl;


    const char* str = "ssdf";
    cout << str ;

    return 0;
}
