//while循环

//	if (条件)
//		语句;
//	//while 语法结构
//	while (表达式)
//		循环语句；

//在屏幕上打印1-10的数字
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i = i + 1;
	}

	return 0;
}