//结构体传参

//传值操作
#include <stdio.h>

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S tmp)//传入的是结构体的值
{
	tmp.a = 100;
	tmp.c = 'w';
	tmp.d = 3.14;
}

int main()
{
	struct S s = { 0 };
	Init(s);//传值操作
	/*
		程序运行完s的成员变量没变化
		而且s的地址和tmp的地址也不相同
		所以s和tmp是不同的结构体
	*/

	return 0;
}