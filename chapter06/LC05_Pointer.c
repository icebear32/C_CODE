//int
#include <stdio.h>

int main()
{
	/*
	* 调试：查看内存
		原来的a
			a	0x11223344
		后来的
			a	00 00 00 00
			把原来的a替换成O的值的a
		printf() 打印 a
	*/
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	printf("%p\n", pa);

	return 0;
}