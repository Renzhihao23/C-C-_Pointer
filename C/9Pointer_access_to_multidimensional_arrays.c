//指针访问多维数组
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

//指针数组 数组里存放的是地址

int main(void)
{
    int matrix[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };

    int (*ptr)[3] = matrix; // (*ptr)[3] ： ptr是一个指针，它指向一个包含3个int元素的一维数值的指针
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", ptr[i][j]);
        }
        
    }
    



	return 0;
}