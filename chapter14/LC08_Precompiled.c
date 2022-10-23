#include <stdio.h>

//##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符
#define CAT(X,Y) X##Y

int main()
{
	int Class21 = 2021;
	//printf("%d\n", Class21);//2021
	printf("%d\n", CAT(Class, 21));
	//printf("%d\n", Class##21);
	//printf("%d\n", Class21);

	return 0;
}