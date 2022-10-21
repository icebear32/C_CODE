//动态内存分配

//常见的动态内存错误 - 对动态开辟空间的越界访问

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));

	if (NULL == p)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = i;//当i是10的时候越界访问 - 程序会崩掉
		}
	}
	free(p);
}