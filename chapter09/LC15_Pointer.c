//数组指针的使用

#include <stdio.h>

int main()
{
	//数组指针的用法 -- 繁琐
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
	printf("%d ", *(*pa + i));//*pa == arr
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
	printf("%d ", (*pa)[i]);
	}
	return 0;
}