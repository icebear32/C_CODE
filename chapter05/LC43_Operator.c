//整型提升

#include <stdio.h>

int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	
	if (a == 0xb6)
		printf("a");//	a整型提升，所以与Ox600不匹配，不打印a

	if (b == 0xb600)
		printf("b");//	b整型提升，所以与Ox6000不匹配，不打印b

	if (c == 0xb6000000)
		printf("c");//	c就是整型，所以匹配成功打印c

	return 0;
}
/*
	例子中的a,b要进行整形提升,但是c不需要整形提升a,
	b整形提升之后,变成了负数,所以表达式a==0xb6 , b==0xb600的结果是假,
	但是c不发生整形提升,则表达式c==Oxb6000000的结果是真.
	所以程序输出的结果是:c
*/