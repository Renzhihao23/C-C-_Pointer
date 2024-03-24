//#include<stdio.h>
//#include<stdint.h>
//#include<inttypes.h>
//int main(void)
//{
//	//指针与数组的关系
//	//数组名作为指针使用
//
//	int32_t arrays[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int32_t* ptr = arrays;
//	//size_t 是一个无符号的整数类型，它专门用来表示大小、长度和索引。
//	//提高程序在不同平台  跨平台的可移植性和安全性。
//	size_t arrays_size = sizeof(arrays) / sizeof(arrays[0]);
//
//	puts("输出原始数组：");
//	for (size_t i = 0; i < arrays_size; ++i)
//	{
//		printf("%" PRId32 " ", arrays[i]);
//	}
//	printf("\n");
//
//	//通过指针增加数组每个元素的值
//	for (size_t i = 0; i < arrays_size; ++i)
//	{
//		*(ptr + i) += 5;
//	}
//	printf("\n");
//
//
//	puts("输出修改后的数组数组：");
//	for (size_t i = 0; i < arrays_size; ++i)
//	{
//		printf("%" PRId32 " ", arrays[i]);
//	}
//	printf("\n");
//
//	return 0;
//}