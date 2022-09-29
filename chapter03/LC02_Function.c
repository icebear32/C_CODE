//库函数strcpy
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[20] = "#######";
	//				 bit\0###
	strcpy(arr2, arr1);
	printf("%s\n", arr2);

	// strcpy - string copy -字符串拷贝
	// strlen - string length - 字符串长度有关

	return 0;
}