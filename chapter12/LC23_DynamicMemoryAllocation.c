//动态内存分配

//柔性数组

#include <stdio.h>

//struct S
//{
//	int n;
//	int arr[10];//固定的数组
//};

struct S
{
	int n;
	int arr[];//未知大小 -未知大小的 - 柔性数组成员-数组的大小是可以调整的
};

//struct S
//{
//	int n;
//	//有些编译器会报错无法编译可以改成：
//	int arr[0];//未知大小	
//};

int main()
{
	struct S s;

	return 0;
}