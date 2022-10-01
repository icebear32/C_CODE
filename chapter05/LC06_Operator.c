//移位操作符

#include <stdio.h>

int main()
{
	int num = 10;
	num >> -1;//error
	//警告 ： 对于移位运算符，不要移动负数位，这个是标准未定义的。 

	return 0;
}