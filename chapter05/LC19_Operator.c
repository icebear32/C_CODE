//单目操作符
//sizeof

#include <stdio.h>

int main()
{
	//short占两个字节
	//sizeof里面的表达式不参与运算
	short s = 0;
	int a = 10;

	//short占两个字节，所以第一个打印的是short变量的内存
	printf("%d\n", sizeof(s = a + 5));//2
	//sizeof里面的表达式不参与运算,所以第二个打印的是s = 0的值
	printf("%d\n", s);//0

	return 0;
}