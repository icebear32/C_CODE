//动态内存分配

//面试题 - 分析

//返回栈空间的地址的问题
#include <stdio.h>
#include <stdlib.h>

int* test()
{
	//static int a = 10;
	//修改点 - 用static修饰，将栈区的错误改成静态区，就不会结束函数就销毁数据
	int a = 10;//栈区
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	return 0;
}