//如何规避野指针
//指针使用之前检查有效性
#include <stdio.h>

int main()
{
	int* p = NULL;
	int a = 10;
	p = &a;
	if (p != NULL)
	{
		*p = 20;
	}

	return 0;
}