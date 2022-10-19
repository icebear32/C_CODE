//memmove 函数
//
//模拟实现memmove函数

#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		//前->后
		/*
			判断count是否为0，每次减减一个字节
			
			将src要操作的字节赋值给dest要覆盖的地址的字节
			然后各自加加，为下一次循环操作跳到下一个字节
		*/
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		/*
			判断count是否为0，每次减减一个字节

			* *((char*)dest + count) ： 
			* 将dest强制类型转换char*类型，每次操作一个字节
			* 加上count是为了每次覆盖操作都是从最后一个字节向前操作
			* 把最后一个字节放在覆盖的地址上
			* 最后*解引用
			
			* *((char*)src + count)
			* 将src强制类型转换char*类型，每次操作一个字节
			* 加上count是为了每次覆盖操作都是从最后一个字节向前操作
			* 把要操作的字节给dest地址
			* 解引用赋值给dest
			
			* 不用做任何的dest、src加加操作
			* 因为每次count都减减，每次都是对最后一个字节操作，然后下一次操作跳到上一个字节
		*/
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	
	my_memmove(arr + 7, arr+2, 8);//处理内存重叠的情况

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
	}

	return 0;
}