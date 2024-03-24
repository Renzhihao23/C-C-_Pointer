//#include<stdint.h>
//#include<stdio.h>
//
//int main(void)
//{
//	//指针的算数运算
//
//	//int
//	int number[] = { 10, 20 ,30, 40, 50, 60, 70, 80, 90, 100 };
//	int* ptr = number; //    int* ptr  = &number[0]
//	// 数组在内存中是连续的
//	// 0 -> 0000000090
//	// 所以只需要一个首地址就可以找到整个数组在哪。
//	// 计算数组大小
//
//
//	// 1指针的用法在数组上
//	// 1计算数组大小
//	int size = sizeof(number) / sizeof(number[0]); 	
//	printf("size = %d\n", size);
//
//
//	// 2使用指针加法移动指针
//	printf("使用指针加法访问第6个元素： \n");
//	ptr += 5;
//	printf("numbers[ptr += 5]: %d\n\n", *ptr);
//
//
//	// 3使用指针减法回到第一个元素
//	ptr -= 5;
//	printf("回到第一个元素numbers[ptr -= 5]: %d\n\n", *ptr);
//
//
//	// 4指针之间的减法， 计算距离
//	int* start_ptr = &number[0];
//	int* end_ptr = &number[size - 1];
//	printf("数组首尾之间的距离是：%td\n\n", end_ptr - start_ptr);
//
//
//	// 5指针之间的比较
//	puts("比较指针之间指向的元素：");
//	if (start_ptr < end_ptr) {
//		puts("start_ptr 指向的元素在end_ptr 所指向的元素之前\n");
//	}
//
//
//	// 6使用指针遍历数组
//	printf("使用指针遍历数值\n外部指针遍历");
//	for (int* p = start_ptr; p < end_ptr; p++)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n");
//
//
//	// 7使用指针减法逐个访问数值中每个元素的反向顺序
//	printf("\n使用指针减法逐个访问数值中每个元素的反向顺序 ");
//	for (int* p = end_ptr; p >= start_ptr; p--)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n\n");
//
//
//	// 8指针加减整数访问特定元素
//	puts("指针加减整数访问特定元素：");
//	int offset = 3;
//	printf("第四个元素（使用加法）:%d\n\n", *(start_ptr + offset));
//	
//
//	// 9比较两个指针
//	int* middle_ptr = &number[size / 2]; //指向数值中间的元素
//	printf("比较两个指针指向的位置: \n");
//	if (start_ptr < middle_ptr) {
//		printf("start_ptr 指向的元素在middle_ptr 所指向的元素之前\n");
//	}
//
//
//
//	return 0;
//}