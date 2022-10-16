//数组参数、指针参数

//把【数组】或者【指针】传给函数


//二维数组传参
#include <stdio.h>

void test(int arr[3][5])//ok？
{}
//void test(int arr[3][])//ok？-->不行
//{}
//void test(int arr[][])//ok？-->不行
//{}
void test(int arr[][5])//ok？
{}

/*
	总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
	因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
	这样才方便运算。
*/

void test(int* arr)//ok？-->不行	//要求传入的是整型指针
{}
void test(int* arr[5])//ok？-->不行	//要求传入的是指针数组
{}
void test(int(*arr)[5])//ok？-->可以	
{}
void test(int** arr)//ok？-->不行	//要求存放的是一级指针的地址
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//传入一维数组的地址
}