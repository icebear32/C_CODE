// ++ 和 -- 运算符

//后置++和--
#include <stdio.h>
int main()
{
	int a = 10;
	int x = a++;
	//先对a先使用，再增加，这样x的值是10；之后a变成11；
	int y = a--;
	//先对a先使用，再自减，这样y的值是11；之后a变成10；
	return 0;
}