//指针数组遍历打印

#include  <stdio.h>

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1,arr2,arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(parr[i] + j));//printf(arr[ i ]) 找到每个数组的首元素地址，然后加 j 是找到下一个数组的地址 
		}
		printf("\n");
	}

	return 0;
}