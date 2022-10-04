//整型提升

#include <stdio.h>

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4

	return 0;
}
/*
	例子中的,c只要参与表达式运算,就会发生整形提升,表达式+c ,就会发生提升,所以sizeof(+c)是4个字节.
	表达式-c也会发生整形提升,所以sizeof(-c)是4个字节,但是sizeof(c),就是1个字节.
*/
