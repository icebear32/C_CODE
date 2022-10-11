//二级指针

#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//ppa就是二级指针
	//int*** pppa = &ppa;//三级指针

	return 0;
}