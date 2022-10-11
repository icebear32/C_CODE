//题目名称:打印水仙花数
//
//题目内容:
//求出0~100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的N次方之和刚好等于该数本身
//如:153=1^3 + 5^3 + 3^3，则153是一个“水仙花数”。

#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for ( i = 0; i <= 10000; i++)
	{
		//判断i是否为水仙花数（自幂数）
		//1、计算i的位数 - n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}

		//2、计算i的每一位的n次方之和 sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}

		//3、比较i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}