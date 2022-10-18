//指针笔试题

//2
#include <stdio.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

//假设p的值为0x100000。如下表表达式的值分别为多少?
//已知，结构体Test类型的变量大小是20个字节

int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	/*
		0x1 就是 1
		p 是一个结构体的地址， p + 0x1 就是跳过一个结构体的地址
		就是跳过20个字节后的地址
		因为是十六进制打印，所以打印的是 0x00100014
	*/

	printf("%p\n", (unsigned long)p + 0x1);
	/*
		(unsigned long)p 将结构体 p 强制类型转换为整型
		(unsigned long)p + 0x1 就是 实实在在的整型加一，p变成十进制加一
		所以是 1048576 + 1 （0x100000 的十进制是 1048576）
		所以是 1048577 再进行%p 打印地址，再转十六进制打印地址
		所以是 0x00100001
	*/

	printf("%p\n", (unsigned int*)p + 0x1);
	/*
		(unsigned int*)p 将结构体强制类型转换成 无符号的 int* 的整型指针
		(unsigned int*)p + 0x1 就是跳过一个无符号的整型指针
		就是 0x100000 加上四个字节
		所以是 000x100004
	*/

	return 0;
}
