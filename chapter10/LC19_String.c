//长度不受限制的字符串函数
// strncpy函数
// 
//char* strncpy(char* destination, const char* source, size_t num);

//1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "jkl";
	strncpy(arr1, arr2, 6);
	printf("arr1:%s\n", arr1);
	/*
		打印的是： “j k l \0\0\0\0\0\0\0”
		因为要拷贝多少个就拷贝多少
		如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
	*/

	return 0;
}