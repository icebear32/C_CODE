//单目操作符
// & 取地址操作符 
// * 解引用操作符
#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;//取地址操作符
	*p = 20;//解引用操作符

	return 0;
}