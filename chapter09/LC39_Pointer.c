//指向函数指针数组的指针

/*
    指向函数指针数组的指针是一个 指针 
    指针指向一个 数组 ，数组的元素都是 函数指针 ;
*/

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//取出数组的地址

	int (*pf)(int, int);//函数指针
	int (*pfArr[4])(int, int); // pfArr是一个数组 - 函数指针的数组
	// ppfArr是一个指向[函数指针数组]的指针
	int (*(*ppfArr)[4])(int, int) = &pfArr;

	// ppfArr是一个数组指针，指针指向的数组有4个元素
	// 指向的数组的每个元素的类型是一个函数指针int(*)(int， int)

	return 0;
}
