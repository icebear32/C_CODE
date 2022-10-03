//逻辑操作符

//360笔试题
#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	
	//逻辑与
	i = a++ && ++b && d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1	2	3	4
	/*
	因为a++是后置++，先使用a再++，a在此时是0，为假，
	逻辑与只要一个为假全部为假，所以a++之后的没有执行
		b仍等于2	c仍等于3	d仍等于4

	*/

	return 0;
}