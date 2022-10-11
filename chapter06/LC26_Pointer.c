//指针和数组

/*
	那么这样写代码是可行的:
	int arr[10]= {1,2,3,4,5,6,7,8,9,0} ;
	int *p = arr;//p存放的是数组首元素的地址
*/
#include <stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int* p = arr; //指针存放数组首元素的地址

    return 0;
}