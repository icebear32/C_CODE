//回调函数
//回调函数方法的计算机程序

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

//通过向 calc函数传入 一个函数指针，去调用另一个函数 -- 回调函数
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请选择两个操作数：>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//向calc函数传入 Add函数的地址
			break;
		case 2:
			calc(Sub);//向calc函数传入 Sub函数的地址
			break;
		case 3:
			calc(Mul);//向calc函数传入 Mul函数的地址
			break;
		case 4:
			calc(Div);//向calc函数传入 DIv函数的地址
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}