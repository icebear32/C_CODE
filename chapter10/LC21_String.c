//strncat函数
//
//char* strncat(char* destination, const char* source, size_t num);

//介绍strncat函数

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	/*
		将 arr2 的内容追加到arr1 字符串后
	*/

	return 0;
}