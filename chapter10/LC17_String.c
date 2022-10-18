//长度不受限制的字符串函数
// strncpy
// strncat 
// strncmp

//长度不受限制的字符串函数注意点
//strcpy 、strcat 、strcmp 一定要遇到 '\0' 才停止运行，写程序要注意函数特性，避免写bug

//所以有了长度不受限制的字符串函数 strncpy、strncat、strncmp 函数

////错误代码
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[5] = "abc";
	char arr2[] = "hello world";

	/*
		strcpy 、strcat 、strcmp 长度不受限制，一定要遇到 '\0' 才停止运行，不管长度是否放得下，直接运行，会导致错误，所以写程序要注意函数特性，避免写bug
	*/
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}