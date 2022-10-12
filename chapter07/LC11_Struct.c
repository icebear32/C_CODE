//练习题

//题目名称:喝汽水问题
//题目内容 :
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水(编程实现)。

//另一种方法
#include <stdio.h>

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	
	//买回来的汽水喝掉
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = 2 * money - 1;
	}
	printf("total = %d\n", total);

	return 0;
}