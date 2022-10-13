//练习题

//在32位大端模式处理器上变量b等于（ A )
//题目内容:
//	A.Ox00
//	B.Ox12
//	C.0x34
//	D.0x1234

#include <stdio.h>

int main()
{
	unsigned int a = 0x1234;//a 是 int类型
	unsigned char b = *(unsigned char*)&a;
	//将 a 强制类型转换成无符号的char*类型
	//然后进行解引用
	//赋值给无符号char类型的 b

	printf("%d\n", b);//以整型的方式打印char类型 b
	//因为电脑是小端存储，所以打印的是52，大端存储输出的是0x00

	return 0;
}