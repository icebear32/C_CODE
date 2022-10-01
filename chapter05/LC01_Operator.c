//算术操作符

#include <stdio.h>

int main()
{
	//对于 / 操作符如果两个操作数都为整数，执行整数除法
	int a = 5 / 2;//商2余1
	printf("%d\n", a);//1

	//对于 / 操作符如果两个操作数都为浮点数,执行浮点数除法
	double b = 5 / 2.0;//5.0 / 2.0
	printf("%lf\n", b);//2.500000

	//非法，右操作数包含“double”类型
	//double c = 5 % 2.0;//err
	double c = 5 % 2;//左右操作数都是整数
	printf("%lf\n", c);


	return 0;
}