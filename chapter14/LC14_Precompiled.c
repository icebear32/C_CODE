/*宏是没法调试的。 */
#include <stdio.h>

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 20;

	int max = MAX(a, b);
	//int max = ((a) > (b) ? (a) : (b));
	/**
	* 因为在预编译时已经将宏的符号进行了替换，
	* 调试之后的代码已经是替换后的代码，所以不能调试
	*/
	printf("max = %d\n", max);//20

	return 0;
}