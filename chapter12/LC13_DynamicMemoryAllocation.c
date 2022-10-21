//动态内存分配

//常见的动态内存错误 - 动态开辟内存忘记释放（内存泄漏）

#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		malloc(1);// 动态开辟内存忘记释放（内存泄漏）
		//循环一直进行没有free掉内存，不断占用内存，
		//直到内存耗尽
		//忘记释放不再使用的动态开辟的空间会造成内存泄漏。 
		//切记： 动态开辟的空间一定要释放，并且正确释
	}

	return 0;
}