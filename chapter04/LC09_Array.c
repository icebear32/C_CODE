//二维数组的使用


//遍历二维数组
#include <stdio.h>

int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	printf("二维数组循环添加内容\n");
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
			printf("%d\n", arr[i][j]);
		}
	}
	printf("遍历二维数组\n");
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d\n", arr[i][j]);
		}
	}
	printf("遍历二维数组的取地址\n");
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}