//二维数组的使用


//遍历二维数组
#include <stdio.h>
 
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	printf("遍历二维数组\n");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}
