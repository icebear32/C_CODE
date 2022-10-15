//数组指针
//数组指针写的套路


#include <stdio.h>

int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;
	//pa指向的数组的元素类型是char*
	// * 说明pa是指针
	// pa 指针变量的名字 
	//[5] pa指向的数组是5个元素的

	int arr2[10] = { 0 };
	int (*pa2)[10] = &arr2;

	return 0;
}