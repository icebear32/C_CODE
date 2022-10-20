//嵌套结构体

#include <stdio.h>

struct T
{
	double f;
	int t;
};

struct S	//类型声明
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	//初始化：定义变量的同时赋初值
	struct S s = { 'c', { 55.6, 30}, 100,3.14,"hello world" };
	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
	printf("%lf\n", s.st.f);

	return 0;
}