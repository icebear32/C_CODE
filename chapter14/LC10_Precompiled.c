#include <stdio.h>

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;

	//int max = MAX(a, b);
	//printf("%d\n", max);//11
	//printf("%d\n", a);//10
	//printf("%d\n", b);//11

	//a++;
	//b++;
	//int max = MAX(a, b);
	//printf("%d\n", max);//12
	//printf("%d\n", a);//11
	//printf("%d\n", b);//12

	int max = MAX(a++, b++);
	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13
	/*
		为什么 b 不是 12？
		因为 int max = MAX(a++, b++); 宏检查替换
		变成了 int max = ((a++) > (b++) ? (a++) : (b++))；
		所以 b 在前面判断时加加一次，在后面结果再次加加，
		所以得到 b(11) + 1 + 1 = 13
	*/

	return 0;
}