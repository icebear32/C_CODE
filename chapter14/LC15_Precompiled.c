/*宏可能会带来运算符优先级的问题，导致程容易出现错。*/
#include <stdio.h>

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 20;

	int max = MAX(a++, b++);//后置加加，先传入a，在加加
	int max = MAX(a+1, b+1);//先计算出a+1的结果等于4再传入宏
	printf("max = %d\n", max);//20

	return 0;
}