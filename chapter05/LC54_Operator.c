//求二进制中不同位的个数题目内容:
//编程实现:
//两个int(32位）整数m和n的二进制表达中，有多少个位(bit)不同 ?
//	输入例子 : 1999 2299
//	输出例子 : 7


#include <stdio.h>

int get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	//return count_bit_one(tmp);
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &n, &m);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);

	return 0;
}
