//联合体
//
//面试题 - 大小端问题

//联合体解决大小端问题
#include <stdio.h>

int check_sys()
{
	union Un
	{ 
		char c;
		int i;
	}u;
	u.i = 1;

	//返回1，表示小端
	//返回0，表示大端
	//因为联合体的成员共用一个地址，所以对 i 赋值1，1的地址为 00000001
	//若为小端则是01 00 00 00，而大端则是 00 00 00 01
	//所以返回的是 0为小端只取前面的01，返回的是 1为大端只取前面的00
	return u.c;
}

int main()
{
	int ret = check_sys();

	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}


////联合体解决大小端问题 - 匿名联合体
////匿名联合体，只能使用一次
//#include <stdio.h>
//
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}