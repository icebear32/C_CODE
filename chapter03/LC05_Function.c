//练习

//写一个函数可以判断一个数是不是素数。
//是素数返回1，不是素数返回0
//#include <stdio.h>
//#include <math.h>

//int is_prime(int n)
//{
//	//2 -> n-1
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		else//代码会出现问题，例如判断9是否是素数,9 % 2不等于0，
//			return 1;//就会到else代码块，输出1，代表9是是素数，但是9不是素数
//	}
//	//return 1;
//}


//优化代码
#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
	//2 -> n-1
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)//修改处，要在前面加include <math.h>
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	 return 0;
}
