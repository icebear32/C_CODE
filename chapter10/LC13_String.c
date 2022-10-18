//strcat函数
//
//char * strcat ( char * destination, const char * source );

//Appends a copy of the source string to the destination string.The terminating null character in destination is overwritten by the first character of source, and a null - character is included at the end ofthe new string formed by the concatenation of both in destination.
//源字符串必须以‘\0'结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何 ?

//自定义strcat函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)	
{
	char* ret = dest;	// dest的地址赋值给ret
	assert(dest != NULL);
	assert(src != NULL);
	//assert(dest && src);

	//1.找到目标字符串的'\0'
	while (*dest != '\0')
	{
		dest++;	//当判断到'\0'停止，将dest的地址移动到'\0'前一个地址
	}
	//2.追加
	while (*dest++ = *src++)	//循环将 src 地址的字符串赋值 dest地址的'\0'（包含'\0'）后面
	{
		;
	}
	return ret;	//返回一个char*类型，dest的数组的首元素地址
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";

	my_strcat(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}