#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

void add_ten_by_value(int *value);
//void add_ten_by_value(int value);
int main(void)
{
    int my_value = 5;
    printf("original value:%" PRId32 "\n", my_value);

    add_ten_by_value(&my_value);
    //add_ten_by_value(my_value);
    printf("Value already called :%" PRId32 "\n", my_value );
 
	return 0;
}

void add_ten_by_value(int *value){
    *value += 10;
}
//void add_ten_by_value(int value){
//   value += 10;
//}