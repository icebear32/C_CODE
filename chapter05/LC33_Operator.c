//逗号表达式
//
//exp1, exp2，exp3，...expN
//	逗号表达式，就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行。
//	整个表达式的结果是最后一个表达式的结果。


#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
	printf("c = %d\n", c);//输出答案13，计算到最后只保留最后一个表达式

	return 0;
}