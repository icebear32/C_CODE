// #include <stdio.h>

// #define MAX	100
// #define DOUBLE(X) ((DOUBLE(X))+(X))/*宏表达式中不能出现递归定义*/

// int main()
// {

// 	int ret1 = 10 * DOUBLE(MAX);

// 	return 0;
// }


#include <stdio.h>

#define MAX	100

int main()
{
	/*当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索*/
	printf("MAX = %d", MAX);/*字符串常量里面的MAX不被搜索替换，而外面的MAX被搜索替换*/

	return 0;
}