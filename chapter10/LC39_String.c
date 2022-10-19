//memcpy 函数
//
//模拟实现memcpy函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

struct S
{
	char name[20];
	int age;
};

/*
	任何类型的指针都可以显式转换为void类型，且不会丢失数据,所以使用void可以对任何类型进行操作
	所以当参数可以是任意类型的指针的时候，就用void *
	使用void *指针之前要进行强制转换

*/
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)//传入的字节是多少就循环多少次，每次循环减一，为0调出循环
	{
		*(char*)dest = *(char*)src;
		//使用void *指针之前要进行强制转换，
		//每次将一个字节的内容复制给强制类型转换的dest

		++(char*)dest;
		++(char*)src;
		//void* 类型不能及逆行算法运算操作，强制类型转换
		//两个每次进行完复制操作后，跳到下一个内容地址
	}

	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { {"张三",20},{"李四",30} };
	struct S arr4[3] = { 0 };

	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));

	return 0;
}