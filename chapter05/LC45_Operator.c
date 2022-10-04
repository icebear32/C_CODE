//算术转换

#include <stdio.h>

int main()
{
	float f = 3.14;
	int num = f;//隐式转换，会有精度丢失
	printf("%d", num);//3

	return 0;
}
