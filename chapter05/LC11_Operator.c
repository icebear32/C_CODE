//位操作符

#include <stdio.h>

int main()
{
	//加减法
	//有缺陷:a,b两个整数型，取的值不超过整数的四个字节，但是相加会超出，二进制，栈溢出
	int a = 3;
	int b = 5;
	printf("before: a = %d b = %d\n", a, b);

	a = a + b;// 8 = 3 + 5 
	b = a - b;// 3 = 8 - 5
	a = a - b;// 5 = 8 - 3

	printf("after: a = %d b = %d\n", a, b);
	
	return 0;
}