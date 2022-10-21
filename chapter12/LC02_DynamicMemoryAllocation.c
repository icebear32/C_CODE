//动态内存分配

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	//向内存申请10个整型的空间
	//int* p = malloc(10 * sizeof(int));//应该会有警告：初始化”: “ int *”与“int”的间接级别不同
	//但是编译器没有报错
	int* p = (int*)malloc(10 * sizeof(int));


	//int* p = (int*)malloc(INT_MAX);
	// 	让程序开辟错误 - 输入INT_MAX
	//	erro : Not enough space

	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for ( i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for ( i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	return 0;
}