#include <stdio.h>
#include <sort.h>
#include<stdlib.h>

void InsertSort(int* a,int n){//算法实现
  int i,insert,temp;
  for(i=1;i<n;i++){//从第二个元素开始向前比较
    insert=i-1;//元素要插入的位置
    temp=a[i];//记录当前元素的数值
//开始向前比较,插入位置没到数组头部或insert位置的元素大于要插入元素,一直循环.
    while(insert>=0 && temp<a[insert]){
      a[insert+1]=a[insert];//比插入元素大的直接后移
      insert--;//insert向前
    }
    a[insert+1]=temp;//找到比要插入元素小的元素的位置,直接放到其后面.
  }
}
