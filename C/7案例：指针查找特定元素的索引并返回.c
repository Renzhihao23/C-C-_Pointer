#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

int main(void)
{
	int32_t values[] = { 10, 20, 30, 40, 50 };
	int32_t* start_ptr = values;

	size_t values_size = sizeof(values) / sizeof(values[0]);

	int32_t target_value = 30;
	int32_t* target_ptr = NULL;
	size_t index = 0;
	bool found = false;

	for (size_t i = 0; i < values_size; i++)
	{
		if (*(start_ptr + i) == target_value)
		{ 
			target_ptr = start_ptr + i;
			index = i;
			found = true;
			break;

		}
	}

	if (found)
		printf("index of element %" PRId32" is %zu\n",target_value, index);
	else
		puts("no find\n");



	return 0;
}