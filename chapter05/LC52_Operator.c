 //写一个函数求a的二进制(补码)表示中有几个1

 //另一个算法：
/*
	先右移操作
	然后和1 (000000000000000000000000000000000001)按位与若按位与操作等于1，则执行if语句
	循环执行，直到32位遍历完
*/
#include <stdio.h>

int count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);

	//写一个函数求a的二进制(补码)表示中有几个1
	int count = count_bit_one(a);//-1
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111
	//00000000000000000000000000000001

	printf("count = %d\n", count);

	return 0;
}
