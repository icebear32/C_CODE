//二维数组

#include <stdio.h>

int main()
{
	//二维数组创建
	int arr1[3][4]; 
	char arr2[3][5]; 
	double arr3[2][4];


	//二维数组初始化
	int arr4[3][4] = { 1,2,3,4 }; //初始化
	int arr5[3][4] = { {1,2},{4,5} }; //默认初始化
	int arr6[][4] = { {2,3},{4,5} };//行可以省略，但是列不能缺少下标

	return 0;
}
