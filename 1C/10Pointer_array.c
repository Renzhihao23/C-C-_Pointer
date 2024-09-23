#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

int main(void)
{
    int department1[] = {1001, 1002, 1003};
    int department2[] = {2001, 2002, };
    int department3[] = {3001, 3002, 3003, 3004};

    int* department_ptrs[3] = {department1, department2, department3};
    int department_sizes[3] = {sizeof(department1)/sizeof(int), sizeof(department2)/sizeof(int), sizeof(department3)/sizeof(int)};
    for (int i = 0; i < 3; i++)
    {
        printf("Department %zu:", i+1);
        for (int j = 0; j < department_sizes[i]; j++)
        {
            printf("%" PRId32 " ", department_ptrs[i][j]);

        }
        printf("\n");
        
    }
    
	return 0;
}