//数组指针

#include <stdio.h>

int main()
{
	int* p = NULL;//p是整型指针–指向整型的指针–可以存放整型的地址
	char* pc = NULL; //pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
	
					 //数组指针–指向数组的指针–存放数组的地址

	//int arr[10] = { 0 };
	// arr - 首元素地址
	//&arr[] - 首元素的地址
	// &arr - 数组的地址

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*parr)[10] = &arr;//把数组的地址存起来
	//上面的parr就是数组指针

	return 0;
}


