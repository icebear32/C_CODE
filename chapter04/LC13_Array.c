/*
	编程题
	创建一个整型数组，完成对数组的操作
	1.实现函数init()初始化数组为全0
	2.实现print()打印数组的每个元素
	3.实现reverse()函数完成数组元素的逆置。
	
	要求:自己设计以上函数的参数，返回值。
*/

//1.实现函数init()初始化数组为全0
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

//2.实现print()打印数组的每个元素
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//3.实现reverse()函数完成数组元素的逆置。
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//把数组初始化为0
	Init(arr, sz);
	
	//打印数组的每一个元素
	Print(arr, sz);

	printf("\n");

	//数组元素的逆置
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	Reverse(arr1, sz1);

	//打印数组的每一个元素
	Print(arr1, sz1);

	return 0;
}
