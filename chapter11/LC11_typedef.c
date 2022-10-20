//结构体传参

//传址操作
#include <stdio.h>

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	/*
		传入的是结构体的地址所以可以对结构体进行操作
	*/

	return 0;
}