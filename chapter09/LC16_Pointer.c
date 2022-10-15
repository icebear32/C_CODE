//数组指针的使用

#include <stdio.h>

int main()
{
	//直接遍历打印更方便
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}