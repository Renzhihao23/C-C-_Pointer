//#include<iostream>
//using namespace std;
//template<typename T,int size>
//
////设计一个类模板，有数据成员T data[size],求有最大值的方法getMax()和排序的方法sort()
////模板参数T可以实例化成int、char、double、float、string等
//
//
//
//
////类模板
//class Data
//{
//	T data[size];
//public:
//	Data()
//	{
//		cout << "input" <<" " << size <<"  " <<"data:" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cin >> data[i];
//		}
//	}
//	void show()
//	{
//		cout << size << "data:" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << data[i] << "\t";
//			
//		}
//		cout << endl;
//	}
//
//	T getMax();  //声明
//
//
//};
//
//
//
//template<class T,int size>   //用类模板
//T Data<T, size>::getMax()    //函数的声明也不一样  原来是  int Data::getMax()
//{
//	T max = data[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (data[i] > max)
//		{
//			max = data[i];
//		}
//
//	}
//	return max;
//}
//
//
//
//
//
//
//
//
//int main()
//{
//	
//	Data <int, 5> d;  //模板类
//	d.show();
//	
//	cout << d.getMax();
//	system("pause");
//	return 0;
//}