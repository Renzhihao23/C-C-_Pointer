#include<stdint.h>
#include<stdio.h>
#include<inttypes.h>

//快捷方式就是指针  char* 快捷方式 = "D:/renzhihao/WeChat/wechat.exe"   指针意义与作用：外部服务操作
//地址：唯一标识内存中存储数据的位置   指针保存的是数据的地址

/*在C和C++语言中，星号（ * ）在指针中有两种用法：
1.定义指针变量时，表示该变量是指针变量。比如：
int* p;
这里的*  表示p是一个指向int类型的指针变量。

2.使用指针变量时， *表示 取指针指向的内存中存储的值。比如：
int a = 10;
int* p = &a;  
printf("%d", *p);
这里的* 表示取指针p指向地址中存储的值，即10
对于第二种用法，需要注意的是，要使用解引用操作符来获取指针所指向的值，必须要确保该指针已经被赋值，指向了有效的内存地址。
如果指针没有被初始化，或者指向的是无效地址，则会导致未定义的行为和程序崩溃等问题。
因此，可以将星号理解为定义指针（使用指针变量）和取值操作（从指针所指向的内存地址中获取值）之间的链接。*/





int main(void)
{
	// 指针是一种特殊的变量,指针不存具体的数值，指针只存储数据的地址。
	// 就像快递员的地图上的标记每个楼层的门牌号（地址）
	
	int building_floors[5] = { 101, 102, 103, 104, 105 };
	int target_floor = 103; //快递员需要找的目标住户

	// ptr_floor_103 -> &building_floors[2]
	int* ptr_floor_103 = &building_floors[2];  //数据类型为int*   表示ptr_floor_103是一个指向int类型的指针变量

	int* ptr_floor_102 = &building_floors[1];

	printf("ptr_floor_103指针变量保存的地址是%p\n", (void*)ptr_floor_103);
	printf("$building_floors[2]的地址是%p\n", &building_floors[2]);

	printf("building_floors[2] = %d\n", building_floors[2]);
	printf("快递员通过*(指针相当于一个地图工具),它带着ptr_floor_103这个指针变量 (它存储了业主的地址) 去寻找....\n");
	printf("于是它找到了业主的门牌号 % d\n", *ptr_floor_103);
	printf("于是它找到了业主的门牌号 % d\n", building_floors[2]);
	
	//快递员找到你了。。。你要求快递员 我要搬家，我会搬到106。
	int* ptr_new_106 = ptr_floor_103;

	// building_floors[2] = 106;
    * ptr_new_106 =  106;

	 printf("&building_floors[2]的值为 %d\n", building_floors[2]);
	


}
