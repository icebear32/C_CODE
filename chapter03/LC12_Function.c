//add函数内容放置函数的实现

//创建Add.h
//创建Add.c

//主函数调用
#include <stdio.h>
#include "Add.h"//引用Add.h的声明

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);//调用Add.c的Add函数
	printf("%d\n", sum);

	return 0;
}
