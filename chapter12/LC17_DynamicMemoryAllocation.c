//动态内存分配

//面试题 - 分析

#include <stdio.h>
#include <stdlib.h>

char* GetMemory(void)
{
	char p[] = "hello world";//创建动态内存空间
	return p;//返回动态内存空间的地址
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();//将GetMemory函数返回的地址赋值给 str 
	printf(str);
}
/*
* 非法访问地址的错误
	错误原因：	GetMemory函数创建数组后，只在内部使用，是局部变量的内容，放在栈区，返回地址，
				但是返回的地址赋值给str，此时GetMemory函数结束，对GetMemory函数的内容进行销毁
				所以只有 p 的地址，但此时原来的数组已经不存在
				再进行 printf(str); 操作，这个地址不知道被谁调用，会打印随机值

				这个问题：返回栈空间的地址的问题
*/

int main()
{
	Test();

	return 0;
}