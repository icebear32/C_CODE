#include <stdio.h>

//函数 - 1
int Max1(int x, int y)
{
	return (x > y ? x : y);
}

//函数 - 2
float Max2(float x, float y)
{
	return (x > y ? x : y);
}

//宏
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	//int a = 10;
	//int b = 20;

	//int max = Max(a, b);
	//printf("max = %d\n", max);//20
	//max = MAX(a, b);
	//printf("max = %d\n", max);//20

	float c = 3.0f;
	float d = 4.0f;

	//函数在调用的时候
	//会有函数调用和返回的开销
	int max1 = Max1(c, d);
	printf("max = %d\n", max1);

	float max2 = Max2(c, d);
	printf("max = %f\n", max2);

	//预处理阶段就完成了替换
	//没有函数的调用和返回的开销
	float max3 = MAX(c, d);
	printf("max = %f\n", max3);

	return 0;
}