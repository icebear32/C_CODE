//练习题

//计算求和
//题目内容 : 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//例如 : 2 + 22 + 222 + 2222 + 22222
//
#include <stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);//2 5
	int sum = 0;
	int i = 0;
	int ret = 0;
	//2 22 222 2222 22222
	//
	for ( i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}

	printf("%d\n", sum);

	return 0;
}