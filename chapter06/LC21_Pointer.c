//指针运算
//
//指针-指针


#include <stdio.h>

int main()
{
	//写法错误
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[0] - &arr[9]);
	//printf("%d\n", &arr[9] - &ch[0]);//err

	return 0;
}