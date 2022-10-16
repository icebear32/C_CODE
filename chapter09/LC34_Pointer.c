//函数指针

//调用函数指针
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", (*pa)(2, 3));
	printf("%d\n", (**pa)(2, 3));//多此一举
	printf("%d\n", (***pa)(2, 3));//多此一举

	return 0;
}