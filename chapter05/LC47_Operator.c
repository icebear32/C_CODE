#include <stdio.h>

/*
short每次改变两个字节的
for循环四次，所以改变了八个字节int类型是四个字节
所以for循环只改变前面数组的两个元素所以答案是0 0 3 4 5
*/
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for ( i = 0;  i < 4;  i++)
	{
		*(p + i) = 0;
	}

	for ( i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}