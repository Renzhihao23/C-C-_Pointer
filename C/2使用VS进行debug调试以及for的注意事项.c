//#include<stdio.h>
//
//
//int main(void)
//{
//	const int NUM_TABLES = 3;
//	const int SEATS_PER_TABLE = 4;
//
//	//外层循环遍历
//	for (int table_num = 1; table_num <= NUM_TABLES; table_num++)
//	{
//		printf("桌子编号：%d\n\n", table_num);
//		// 内层循环遍历 当前桌子的每一个座位
//		for (int seat_num = 1; seat_num <= SEATS_PER_TABLE; seat_num++)
//		{
//			printf("座位编号：%d\n", seat_num);
//
//			// 在这里执行具体的座位分配操作
//			//。。。。。
//			printf("\t\t处理中：桌子 %d, 座位 %d\n", table_num, seat_num);
//		}
//	}
//	return 0;
//}