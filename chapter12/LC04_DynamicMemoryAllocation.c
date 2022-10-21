//动态内存分配

//malloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	//malloc(10 * sizeof(int))
	int* p = (int*)calloc(10, sizeof(int));//calloc创建时就开始初始化
	/*
		malloc() 在堆区分配一块指定大小的内存空间，用来存放数据。
		这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
		如果希望在分配内存的同时进行初始化，请使用 calloc() 函数。
	*/

	if (p ==NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for ( i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//释放空间
	//free函数是用来释放动态开辟的空间的
	free(p);
	p = NULL;

	return 0;
}