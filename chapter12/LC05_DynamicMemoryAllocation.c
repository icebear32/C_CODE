//动态内存分配

//realloc

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
		for ( i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}

	//就是在使用malloc开辟的20个字节空间
	//假设这里，20个自字节不能满足我们的使用了
	//希望我们能够有40个字节的空间
	//这里就可以使用realloc来调整动态开辟的内存
	int* p2 = realloc(p, 40);
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}
	free(p2);
	p2 = NULL;

	return 0;
}