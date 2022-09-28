//一些for循环的变种

//变种2
#include <stdio.h>

int main()
{
	int x, y;

	//第一次判断：x = 0,y = 0， x < 2 && y < 5判断成立，执行循环
	//第一次判断：x = 1,y = 1， x < 2 && y < 5判断成立，执行循环
	//第一次判断：x = 2,y = 2， x < 2 && y < 5判断不成立，不执行循环
	//因为&&：短路与，表示如果两个条件都成立则执行之后的逻辑
	//所以因为x=2，x<2的条件不成立，循环不执行
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}