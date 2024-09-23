#include<stdio.h>
#include<stdint.h>

//野指针：指向了一个无效的内存地址或者已经释放的内存地址的指针  非常危险 野指针会访问一个不可描述的内存空间，导致不可预测的行为
//空指针：没有指向任何有效内存地址的指针  char* p = NULL

int main(void)
{
	uint32_t* ptr_to_floor = NULL;   // 空指针， 没有指向任何楼层的地址
	uint32_t* number = 100;
	ptr_to_floor = &number;

	if (ptr_to_floor == NULL)
		printf("error access");
	else
		printf("floor is:%p ,floor number is:%d\n", (void*)ptr_to_floor,  *ptr_to_floor);

	//从代码上认识野指针
	//创建一个新的作用域
	{
		int temp_floor = 104;       //另一个楼层号
		ptr_to_floor = &temp_floor; //指针现在指向新的楼层
	}  // temp_floor已经离开作用域了,这个程序中不存在temp_floor，当然，他的值和地址也不存在了，那么问题来了，我已经在22行把temp_floor的地址交给了ptr_to_floor，ptr_to_floor->????
	printf("试图尝试访问新的楼层号，可能的地址：%p, 值是未定义的：%d\n", (void*)ptr_to_floor, *ptr_to_floor);
}



