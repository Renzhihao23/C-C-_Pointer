//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	//1.先打印所有三位数字
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num % 10; //获取数字个位
//		b = num / 10 % 10;//获取数字十位
//		c = num / 100;//获取数字百位
//		if (a*a*a + b*b*b + c*c*c == num)//如果是水仙花数才打印
//		{
//			cout << num << endl;
//		
//		}
//		num++;
//	}while (num < 1000);
//
//	system("pause");
//	return 0;
//}