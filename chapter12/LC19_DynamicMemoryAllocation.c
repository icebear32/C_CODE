//动态内存分配

//面试题 - 分析

//返回栈空间的地址的问题

#include <stdio.h>
#include <stdlib.h>

int* test()
{
	int* ptr = malloc(100);//堆区
	return ptr;
}
/*
	代码没错误，因为malloc的动态内存空间是放在堆区，没有经过free是不会销毁
	虽然test函数结束后会将 ptr 进行销毁，但是已经将ptr的地址赋值给p，
	销毁了但是创建的动态内存空间还在，还是可以通过地址 p 去访问动态内存空间
	所以说代码没错误
*/

int main()
{
	int* p = test();

	return 0;
}