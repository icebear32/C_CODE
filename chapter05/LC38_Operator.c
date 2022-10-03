//下标引用、函数调用和结构成员

#include <stdio.h>

//函数调用操作符
get_max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	//调用函数的时候（）就是函数调用符
	int max = get_max(a, b);
	printf("max = %d\n", max);

	return 0;
}