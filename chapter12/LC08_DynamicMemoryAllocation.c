//动态内存分配

//常见的动态内存错误 - 对NULL指针的解引用操作

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

////错误情况
//int main()
//{
//	//1．对NULL进行解引用操作
//	int* p = (int*)malloc(40);
//	//万一 malloc 失败了，p就被赋值为NULL
//	*p = 0;//erro
//	
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//
//	return 0;
//}


int main()
{
	//1．对NULL进行解引用操作
	int* p = (int*)malloc(40);
	//万一 malloc 失败了，p就被赋值为NULL
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else//不为空指针进行以下操作
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;//err
		}
	}
	
	free(p);

	return 0;
}