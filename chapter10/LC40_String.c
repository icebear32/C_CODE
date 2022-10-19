//memmove 函数
//
//memcpy函数对重叠地址会出现错误

#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;

		++(char*)dest;
		++(char*)src;
	}

	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;

	//设想将 1,2,3,4,5 覆盖到数组的第二个元素后面，变成1,2,1,2,3,4,5,8,9,10
	my_memcpy(arr + 2, arr, 20);

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//打印的是：1 2 1 2 1 2 1 8 9 10
	}

	/*
		原来数组：1,2,3,4,5,6,7,8,9,10
		设想打印：1,2,1,2,3,4,5,8,9,10
		实际打印：1 2 1 2 1 2 1 8 9 10

		因为my_memcpy函数是一个字节顺序操作的，
		开始将第一个 src地址的1 覆盖了 第一个dest地址 3，所以第一个dest地址变成了1
		接着将第二个 src地址的2 覆盖了 第二个dest地址 4，所以第二个dest地址变成了2
		接着将第三个 src地址的1 覆盖了 第三个dest地址 5，所以第三个dest地址变成了1
		接着将第四个 src地址的2 覆盖了 第四个dest地址 6，所以第四个dest地址变成了2
		接着将第五个 src地址的1 覆盖了 第五个dest地址 6，所以第五个dest地址变成了1
		停止my_memcpy函数

		错误是因为出现了重叠的地址，所以反复打印了12121
		而my_memcpy函数不对重叠函数做操作，索引引用了memmove函数

	*/

	return 0;
}

/*
	注意：memcpy是可以对重叠的内存进行拷贝的

	C语言标准：

	​	memcpy函数只要处理不重叠的内存拷贝就可以

	​	memmove函数只要处理重叠内存拷贝
*/