//指针运算
//
//指针-指针


#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 0;

	//大指针减小指针
	num = &arr[9] - &arr[0];
	printf("%d\n", num);//9

	//小指针减大指针
	printf("%d\n", &arr[0] - &arr[9]);//-9

	//总结：指针减去指针得到的是数组的元素个数

	return 0;
}