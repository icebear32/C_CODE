//如何规避野指针
//指针指向空间释放之后要让指针置NULL
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;

	//用完设为NULL
	pa = NULL;

	return 0;
}