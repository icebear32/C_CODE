//C语言类型
//内置类型
//char
//short
//int
//long
//float
//double


#include <stdio.h>

int main()
{
    //使用的数据类型会开辟内存，空间的大小因数据类型不同而不同(大小决定了使用范围)。
	char c = 'c';//1字节
	short s = 10;//2字节
	int i = 10;//4字节
	long l = 10;//8字节
	float f = 10.0;//8字节
	double d = 10.0;//8字节

	return 0;
}