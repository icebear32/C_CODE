//动态内存分配

//常见的动态内存错误 - 使用free释放一块动态开辟内存的一部分

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*p++ = i;//因为后置++，先使用后++，使用p，跳到下一个地址，然后解引用
	}
	//回收空间
	//使用free释放动态开辟内存的一部分
	free(p);
	p = NULL;

	return 0;
}
/*
	程序崩溃
	因为后面 free函数的 p 的地址已经不是要释放的内存
	只是 p 开辟空间的其中一部分
*/