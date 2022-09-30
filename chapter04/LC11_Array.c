//再优化
/*
	当数组传参的时候，实际上只是把数组的首元素的地址传递过去了。
	所以即使在函数参数部分写成数组的形式:int arr[]表示的依然是一个指针︰int *arr。那么，函数内部的sizeof(arr)结果是4。
 
	解决方法：可以将 sz 的计算方式放在main主函数，以传参的方式传入函数
*/
/*
	如果方法1错了，该怎么设计?
		加入flag=1，若循环时第一个if语句执行则将flag=0，让第二个if语句条件不成立，反则第二个if语句成立终止循环。
		flag是检测是否有排序交换的操作，若没有排序交换就可以直接认定排序成功，不用再循环排序，不用浪费时间继续排序。
*/
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz);//冒泡排序函数
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}