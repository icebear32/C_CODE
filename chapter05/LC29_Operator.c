//逻辑操作符

//笔试题
#include <stdio.h>

int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    
	//逻辑或
	i = a++ || ++b || d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	/*
	逻辑或:只要有个判断为真就为真，a++先使用a后++，a是0，所以为假
	然后 ++b 先 ++ 后使用,所以不为0，为真所以b之后判断停止执行
		c仍等于3	d仍等于4
	*/

	return 0;
}