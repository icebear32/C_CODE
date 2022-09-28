//介绍getchar（）
//getchar()函数的功能是一个一个地读取你所输入的字符

#include <stdio.h>

int main()
{
	int ch = getchar();

	putchar(ch);//接受一个字符并打印输出
	printf("%c\n", ch);//将ch的字符打印输出

	return 0;
}