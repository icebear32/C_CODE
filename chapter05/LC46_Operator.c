/*
	char* pc每次操作一个字节
	因此char* pc = 0操作只改变a的44为0
	所以打印的是1122 33 00

*/

#include <stdio.h>

int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);

	return 0;
}