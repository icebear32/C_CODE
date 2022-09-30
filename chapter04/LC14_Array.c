//将数组A中的内容和数组B中的内容进行交换。(数组一样大)

#include <stdio.h>

//实现print()打印数组的每个元素
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };

	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	
	Print(arr1, sz);
	printf("\n");
	Print(arr2, sz);

	return 0;
}
