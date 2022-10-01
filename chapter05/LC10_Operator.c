//位操作符

//不能创建临时变量(第三个变量），实现两个数的交换。
#include <stdio.h>

int main()
{
	//临时变量的方法
	int a = 3;
	int b = 5;
	int tmp = 0;//临时变量
	printf("before: a = %d b = %d\n",a,b);

	//交换变量
	tmp = a;
	a = b;
	b = tmp;

	printf("after: a = %d b = %d\n", a, b);

	return 0;
}