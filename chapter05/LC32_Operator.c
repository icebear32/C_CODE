//条件操作符
//
//三目运算符
//	exp1 ? exp2 : exp3

#include <stdio.h>

int main()
{

	//求两数最大值
	int a = 10;
	int b = 20;
	int max = 0;

	max = a > b ? a : b;
	printf("两数最大值:max = %d\n", max);
	
	return 0;
}