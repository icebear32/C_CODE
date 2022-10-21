//动态内存分配

//realloc的注意事项
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}

	//realloc使用的注意事项:
	//1．如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2．如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域，
	//		开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
	//		最后返回新开辟的内存空间地址
	//3. 得用一个新的变量来接受realloc函数的返回值

	//错误情况
	//p = realloc(p, 4000);
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}

	int* ptr = realloc(p, INT_MAX);//用一个新的变量来接受realloc函数的返回值

	if (ptr != NULL)//新的变量没有为空指针
	{
		p = ptr;//再将 ptr指针 赋值给 p指针
		
		//再进行其他操作
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	//释放内存
	free(p);
	p = NULL;

	return 0;
}