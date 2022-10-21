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

	//申请失败，返回的指针为NULL，
	//所以每次执行申请动态内存后判别返回地指针是否为NULL就相当重要了
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);//释放 p 所指向的动态内存

	p = NULL;//是否有必要？- 有
	//因为释放后的 p 还是存在的，可以通过某种方式找到 p 的内容

	return 0;
}