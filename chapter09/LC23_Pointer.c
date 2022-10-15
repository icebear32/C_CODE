//数组指针在二维数组可以很好体现

//等价的方式打印二维数组
#include <stdio.h>

void print2(int (*p)[5], int x, int y)
{
	int i = 0; 
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//四个都是等价的
			printf("%d ", p[i][j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p + i) + j));
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}

}
int main()
{
    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
    print2(arr, 3, 5);

    return 0;
}