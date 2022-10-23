#include <stdio.h>

#define MAX	100
#define DOUBLE(X) ((X)+(X))

int main()
{
	/**
	* 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换
	* 代码中，有两个宏，但是首先对DOUBLE宏的参数检查，发现含有#define符号，首先替换
	*/
	int ret1 = 10 * DOUBLE(MAX);/*替换文本在哪，就替换在哪*/
	int ret2 = 10 * DOUBLE(MAX+ MAX);

	return 0;
}