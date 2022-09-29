//练习∶求n的阶乘。(不考虑溢出)

//用递归的方式
/*
	判断是否小于或等于0
	不是小于或等于0，不断调用Fac2函数，
	直到小于或等于0，返回1，然后回到上一次调用的函数，
	不断乘以上一个数，回到第一次调用函数
	最后结束Fac2函数
*/
#include <stdio.h>

int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}

int main()
{
	//求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);//循环的方式
	printf("%d\n", ret);

	return 0;
}
