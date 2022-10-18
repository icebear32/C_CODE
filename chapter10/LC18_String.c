//长度不受限制的字符串函数
// strncpy
// 
//char* strncpy(char* destination, const char* source, size_t num);

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "hello world";
	strncpy(arr1, arr2, 4);
	printf("arr1:%s\n", arr1);
	/*
		打印的是 hellef\0
		拷贝几个就覆盖目标数组的几个元素
	*/

	return 0;
}