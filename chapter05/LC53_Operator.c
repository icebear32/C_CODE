 //写一个函数求a的二进制(补码)表示中有几个1

 //第三种算法
/*
	n = n & (n -1)
	n
	13
	1101 n
	1100 n - 1
	1100 n - 1
	1000 n
	0111 n - 1
	0000 n 
*/
#include <stdio.h>
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
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
