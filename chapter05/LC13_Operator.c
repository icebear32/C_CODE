//位操作符

//练习∶编写代码实现:求一个整数存储在内存中的二进制中1的个数。
//问题：负数会出现问题
#include <stdio.h>

int main()
{	
	int num = 0;
	int count = 0;
	scanf("%d", &num);//3 - 011

	//统计num的补码有几个1
	while (num)
	{
		if (num % 2 == 1)//求 num 除以 2 的余数是否为1
			count++;//记录为1的次数
		num = num / 2;//num/2 为下一次循环的条件
	}
	printf("%d\n", count);

	return 0;
}