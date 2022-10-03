//条件操作符
//
//三目运算符
//	exp1 ? exp2 : exp3

#include <stdio.h>
	
int main()
{
	int a = 0;
	int b = 0;

	if (a > 5)
		b = 3;
	else
		b = -3;
	printf("b = %d\n", b);

	b = (a < 5 ? 3 : -3);
	printf("b = %d\n", b);

	return 0;
}