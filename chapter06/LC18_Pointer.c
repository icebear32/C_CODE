//指针运算

//指针+-整数

//指针+-整数是跳过一个地址

#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *p);//从 10 向前打印，每次跳过两个地址
		p -= 2;
	}

	return 0;
}