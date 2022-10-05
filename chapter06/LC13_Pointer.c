//如何规避野指针

//指针初始化
#include <stdio.h>

int main()
{
	int b = 0;
	int a = 10;
	int* pa = &a;//初始化
	int* p = NULL;//NULL - 用来初始化指针的，给指针赋值

	return 0;
}