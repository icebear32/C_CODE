//char
#include <stdio.h>

int main()
{
	/*
	* 调试：查看内存
		原来的a
			a	0x11223344
		后来的
			a	11 22 33 00
			把原来的a替换成O的值的a
		printf() 打印 a
	*/
	int a = 0x11223344;
	char* pc = &a;
	*pc = 0;

	return 0;
}