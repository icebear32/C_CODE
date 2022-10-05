#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long*));
	/*
		这里可以看到，指针的定义方式是:type + *。
		其实:	char*类型的指针是为了存放char类型变量的地址。
				short*类型的指针是为了存放short类型变量的地址。
				int*类型的指针是为了存放int类型变量的地址。
	*/

	return 0;
}
