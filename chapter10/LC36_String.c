//内存操作函数 

//为什么会有内存操作函数 

/*
	memcpy函数、memmove函数、memcmp函数、memset函数要处理整型数组、浮点型、数组、结构体数组，
	因此要使用到 void* - 通用类型的指针 - 无类型指针
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 0 };

	//char* dest,const char* src
	strcpy(arr2, arr1);
	/*
		因为strcpy函数每次移动一个字节,
		而arr1是四个字节的数，
		所以只复制1到arr2,

	*/

	return 0;
}