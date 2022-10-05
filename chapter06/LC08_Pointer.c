//解引用

#include <stdio.h>

int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;   //重点在调试的过程中观察内存的变化。
	*pi = 0;   //重点在调试的过程中观察内存的变化。

	return 0;
}