//memmove 函数

//my_memcpy函数对重叠地址会出现错误
// 
//注意：memcpy函数是可以对重叠的内存进行拷贝的
// 
//C语言标准：
//​	memcpy函数只要处理不重叠的内存拷贝就可以
//​	memmove函数只要处理重叠内存拷贝


#include <stdio.h>
#include <string.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;

	memcpy(arr + 2, arr, 20);//memcpy函数处理内存重叠的情况

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
	}

	return 0;
}