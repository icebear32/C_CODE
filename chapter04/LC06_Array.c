//一维数组在内存中的存储

//打印数组地址
//数组在内存中是连续存放的

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//创建一个10个int类型元素的数组

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);//打印数组元素地址 - 每个元素间隔4个字节的地址
	}

	return 0;
}
