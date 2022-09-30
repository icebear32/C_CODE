//数组作为函数参数


//冒泡排序
//方法一
#include <stdio.h>

void bubble_sort(int arr[])
{
	//确定冒泡排序的趟数
	int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗?//不对 - sizeof是另一个值
	//因为传入的参数是数组首元素地址，两个都是相同的地址，相除 sz 就等于 1

	int i = 0;
	for (i = 0; i < sz - 1; i++) 
	{
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) //若右边的元素大于左边的元素，执行以下操作 - 交换元素
			{
				int tmp = arr[j]; 
				arr[j] = arr[j + 1]; 
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
	bubble_sort(arr);//冒泡排序函数
	
	//是否可以正常排序？==》不行
	
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
/*
	方法1，出问题，数组作为函数参数的时候，不是把整个数组的传递过去，
	arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr [0]，而且sizeof(arr)是另一个值。
*/