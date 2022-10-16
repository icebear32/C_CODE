//调用函数指针
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));//一旦存好地址,可以使用不同方法找到:
	printf("%d\n", Add(2, 3));//一旦存好地址,可以使用不同方法找到:
	
	//printf("%d\n", *pa(2, 3));//err	错误，间接寻址
	
	printf("%d\n", (*pa)(2, 3));//一旦存好地址,可以使用不同方法找到:


	return 0;
}