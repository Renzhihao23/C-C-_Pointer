//#include<stdint.h>
//#include<stdio.h>
//#include<inttypes.h>
//
///************循环五个步骤*************
//* 1. 初始化
//* 2. 条件判断
//* 3. 循环体
//* 4. 迭代条件
//* 5. 中止条件*/
//
//int main(void)
//{
//	/*
//		自动贩卖机
//		这个机器只支持硬币，假设只卖一种饮料，每瓶价格是￥5
//		怎么样才能给用户饮料呢?
//		用户需要一直投币，直到金币足够，机器才能提供饮料
//		只接受1，2，5元的硬币
//		
//	*/
//
//	//1.初始化
//	const uint32_t Price = 5;
//	uint32_t balance = 0;
//	uint32_t coin = 0;
//	puts("欢迎使用自动贩卖机！本机器只提供一种饮料，价格是￥5.");  //puts无变量，纯字符串
//	puts("请投币（只接受1，2，5元的硬币）");					   //printf有变量
//
//	//2. 条件判断
//	while (balance < Price)
//	{
//		puts("钱不够，请投币：");
//		scanf_s("%" PRIu32, &coin); 
//		if (coin == 1 || coin == 2 || coin == 5)
//		{
//			balance = balance + coin;
//			printf("您已经投入了￥%" PRIu32 "\n", balance);
//		}
//		else 
//		{
//			printf("对不起，我们不接受￥%" PRIu32 "的硬币，请重新投票！\n", coin);
//		}
//	}
//	puts("饮料已出库！");
//	// 找零
//	if (balance > Price)
//	{
//		printf("请收好找零￥%" PRIu32 "\n" "谢谢惠顾", balance - Price);
//	}
//
//	return 0;
//}