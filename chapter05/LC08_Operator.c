//位操作符

#include <stdio.h>

int main()
{
	// | - 按2进制位或
	int a = 3;
	int b = 5;
	int c = a | b;
	//
	//两个进行比较，有1即为1
	//a = 3 - 00000000000000000000000000000011
	//b = 5 - 00000000000000000000000000000101
	//c = 7 - 00000000000000000000000000000111
	//
	printf("%d\n", c);//7

	return 0;
}