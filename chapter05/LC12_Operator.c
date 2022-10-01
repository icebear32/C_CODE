//位操作符

#include <stdio.h>

int main()
{
	//异或的方法
	int a = 3;
	int b = 5;
	printf("before: a = %d b = %d\n", a, b);

	a = a ^ b;
	//a			011
	//b			101
	//a = a^b	110

	b = a ^ b;
	//a			110
	//b			101
	//b = a^b	011

	a = a ^ b;
	//a			110
	//b			011
	//b = a^b	101
	
	printf("after: a = %d b = %d\n", a, b);

	return 0;
}