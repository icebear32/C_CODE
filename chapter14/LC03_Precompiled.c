#include <stdio.h>

#define MAX 100
#define STR "hehe"
#define reg register

#define do_forever for(;;)

int main()
{
	//reg int a;
	////相当于 register int a;

	//int max = MAX;
	////相当于 int max = 100;
	//printf("%d\n", max);

	//printf("%s\n", STR);

	do_forever;
	//相当于
	//for (;;)
	//	;
	//结果出现程序错误

	return 0;
}