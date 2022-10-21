//动态内存分配

//常见的动态内存错误 - 对非动态开辟内存使用free释放

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;

	free(p);
	p = NULL;

	return 0;
}
/*
	- 程序奔溃
	错误原因：a其实是在栈区的，而动态内存函数是在堆区，强行free会程序错误

*/