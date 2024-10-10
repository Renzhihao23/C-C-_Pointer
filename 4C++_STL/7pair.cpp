#include<iostream>
#include <utility>
using namespace std;
 
void printPair(pair<int, string>p)
{
	cout << p.first << " " << p.second << endl;
}
int main()
{
	//1.默认构造
	pair<int ,string>p1;
	p1.first = 1;
	p1.second = "zhangsan";
	cout << "p1:" ;
	printPair(p1);
 
	//2.直接初始化
	pair<int, string>p2(2, "lisi");
	cout << "p2:" ;
	printPair(p2);
 
	//3.拷贝构造
	pair<int, string>p3(p2);
	cout << "p3:" ;
	printPair(p3);
 
	//4.使用make_pair()函数
	int a = 3;
	string s = "wangwu";
	pair<int, string> p4;
	p4= make_pair(a, s);
	cout << "p4:";
	printPair(p4);
 
	return 0;
}