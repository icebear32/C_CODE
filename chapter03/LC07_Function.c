//练习

//写一个函数，实现一个整形有序数组的二分查找

//程序不能实现要求 - 运行后找不到数字
//#include <stdio.h>
//
//int binary_search(int arr[], int k)
//{
//	//算法的实现
//
//	//错误点：arr首元素地址/arr首元素 = 1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)//当两个交错时退出循环
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组查查找具体的某个数
//	//如果找到了返回，这个数的下标; 找不到的返回 - 1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标时：%d\n", ret);
//
//	return 0;
//}


//-------------------------------------------------------
//优化代码
#include <stdio.h>

int binary_search(int arr[], int k, int sz)
{
	//算法的实现
	int left = 0;
	int right = sz - 1;

	while (left <= right)//当两个交错时退出循环
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//二分查找
	//在一个有序数组查查找具体的某个数
	//如果找到了返回，这个数的下标; 找不到的返回 - 1

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
		printf("找不到指定的数字\n");
	else
		printf("找到了，下标时：%d\n", ret);

	return 0;
}