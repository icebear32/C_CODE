//memmove 函数

//void* memmove(void* destination, const void* source, size_t num);

/*
	和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。

	如果源空间和目标空间出现重叠，就得使用memmove函数处理。
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	
	memmove(arr + 2, arr, 20);//处理内存重叠的情况

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
	}

	return 0;
}