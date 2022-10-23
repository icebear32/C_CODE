#include <stdio.h>

//函数
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//宏
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 20;
	
 //宏通常被应用于执行简单的运算。比如在两个数中找出较大的一个
	//函数和宏都可以完成
	int max = Max(a, b);
	printf("max = %d\n", max);//20
	max = MAX(a, b);
	printf("max = %d\n", max);//20

	return 0;
}