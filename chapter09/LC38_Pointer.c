//使用函数指针数组的实现
//使用函数指针数组的实现计算器（完善）

#include <stdio.h>

void menu()
{
	printf("*************************\n");
	printf("**1:add           2:sub**\n");
	printf("**3:mul           4:div**\n");
	printf("******    0:exit  *******\n");
	printf("*************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;//加多一个函数，不用改动很多代码，只需在函数指针数组添加函数名
}


int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	//int (*pf[5])(int x, int y) = { 0,Add,Sub,Mul,Div };//转移表
	//数组的括号【】不用填数字，方便不断增加函数
	int (*pf[])(int x, int y) = { 0,Add,Sub,Mul,Div,Xor };//转移表

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);//输入要使用函数指针数组的下标
		if (input <= 4 && input >= 1)//根据输入的下标找到相应的函数指针，找到相应的函数
		{
			printf("请输入操作数：");
			scanf("%d%d", &x, &y);
			ret = (*pf[input])(x, y);
		}
		else if (input == 0)
		{
			printf("退出程序");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
		printf("ret = %d\n", ret);
	} while (input);

	return 0;
}