//面试题
//请问循环要循环多少次?
//循环0次，因为for循环的判断处事0赋值给k
//k恒为0，0为假，则循环条件不成立，循环0次
#include <stdio.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;

	return 0;
}