//指向函数指针数组的指针
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//指针数组
	int* arr[10];
	
	//数组指针
	int* (*pa)[10] = &arr;
	
	//函数指针
	int (*pAdd)(int, int) = Add; // &Add
	//int sum = (*pAdd)(1, 2);
	//int sum = pAdd(1, 2);
	int sum = Add(1, 2);
	printf("sum = %d\n",sum);
	
	//函数指针的数组
	int(*pArr[5])(int, int);

	//指向函数指针数组的指针
	int(*(*ppArr)[5])(int, int) = &pArr;

	return 0;
}