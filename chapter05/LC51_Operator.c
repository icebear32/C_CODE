 //写一个函数求a的二进制(补码)表示中有几个1

 //-1出现问题
//修改
#include <stdio.h>
#include <stdlib.h>

int count_bit_one(unsigned int n)//修改处：unsigned int n
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count = %d\n", count);

	return 0;
}
