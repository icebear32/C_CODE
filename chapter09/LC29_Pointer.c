//指针参数

//二级指针传参

//使用二级指针传参数的函数
//当函数的参数为二级指针的时候，可以接收什么参数？
#include <stdio.h>

void test(int** p)//要求课传入一级指针或者二级指针的地址
{}

int main()
{
	int* ptr;//一级指针
	int** pp = &ptr;//二级指针
	test(&ptr);
	test(pp);

	int* arr[10];
	test(arr);//指针数组也可以

	return 0;
}