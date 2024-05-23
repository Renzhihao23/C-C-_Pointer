#include <stdio.h>
#include <sort.h>
#include<stdlib.h>

int main()
{
    int a[]={3,1,6,2,7,9,8,5,4};
    InsertSort(a,sizeof(a)/sizeof(a[0]));
    PrintList(a,sizeof(a)/sizeof(a[0]));
    return 0;
}

