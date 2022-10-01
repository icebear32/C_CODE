//移位操作符

#include <stdio.h> 

int main()
{
	int num1 = 10;
	int num2 = 10;
	num1 = num1 << 1;
	printf("%d\n", num1);
	/*
		但实际上num在没被赋值的情况下，自身的值不会变化。
	*/
	num2 << 1;
	printf("%d\n", num2);

	return 0;
}