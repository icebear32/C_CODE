//逻辑操作符

//笔试题
#include <stdio.h>

int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    
	//将 a++ 改成 ++a
	i = ++a || ++b || d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1	2	3	4	
	/*
	因为 ++a 是++操作并使用，a为1，所以为真，为真之后判断停止执行
		b仍等于2	c仍等于3	d仍等于4
	*/

	return 0;
}