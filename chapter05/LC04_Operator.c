//移位操作符

#include <stdio.h> 

int main()
{
	// << -- 左移操作符
	//左边丢弃，右边补0

	int num1 = 10;

	num1 = num1 << 1;
	printf("%d\n", num1);

	return 0;
}