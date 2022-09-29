//练习3∶求n的阶乘。(不考虑溢出)
 
#include <stdio.h>

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int main()
{
	//求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fac1(n);//循环时的方式
	printf("%d\n", ret);

	return 0;
}
