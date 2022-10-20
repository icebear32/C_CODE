//结构体变量的定义和初始化

#include <stdio.h>

struct S	//类型声明
{
	char c;
	int a;
	double d;
	char arr[20];
};

int main()
{
	//初始化：定义变量的同时赋初值
	struct S s = { 'c',100,3.14,"hello world" };
	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);

	return 0;
}