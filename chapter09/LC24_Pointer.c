//数组参数、指针参数

//把【数组】或者【指针】传给函数

//一维数组传参
#include <stdio.h>

void test(int arr[])//ok
{}
void test(int arr[10])//ok
{}
void test(int* arr)//ok
{}
void test2(int* arr[])//ok
{}
void test2(int* arr[20])//ok
{}
void test2(int** arr)//ok
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);

	return 0;
}

/*
	以上函数传参都是可以的
*/