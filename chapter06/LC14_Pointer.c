//如何规避野指针
//指针越界
#include <stdio.h>

int main()
{
	//指针越界
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}

	return 0;
}