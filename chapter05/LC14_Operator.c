//位操作符

//练习∶编写代码实现:求一个整数存储在内存中的二进制中1的个数。
//问题：负数会出现问题
//方法二
#include <stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);//-1

	for (int i = 0; i < 32; i++)
	{
		/*
			按位与运算:同一则一。当两个二进制数同位上的都是1时才可以为1，否则为0
			每次 num 右移 i 个bite，然后进行按位与操作，
			if判断，若num为1，count加1
			循环32次，每次循环都是num，没有进行赋值没有改变num值
		*/
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);

	return 0;
}
//思考还能不能更加优化，这里必须循环32次的。
