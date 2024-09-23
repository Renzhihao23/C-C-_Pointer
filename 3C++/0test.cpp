#include<iostream>
using namespace std;
#include<string>
#include<string.h>

int main(){
    string str;
    getline(cin, str);
    char copyStr[20] = {'\0'};
    if(str.length() < 20 ){
        strcpy(copyStr, str.c_str());
    }
    else cout << "error";
}