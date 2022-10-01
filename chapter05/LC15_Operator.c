//位操作符

//练习∶编写代码实现:求一个整数存储在内存中的二进制中1的个数。
//问题：负数会出现问题
//方法三：优化
#include <stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);//-1

	//循环将num不断按位与操作，直到num为0，跳出循环
	while (num)//num不为0则为真
	{
		count++;//记录二进制为1次数
		num = num & (num - 1);//num 和 num-1 进行按位与操作，赋值给num
	}
	
	printf("二进制中1的个数 = %d\n", count);

	return 0;
}
