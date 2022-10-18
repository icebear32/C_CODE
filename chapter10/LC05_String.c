//strcpy函数
//
//char* strcpy(char * destination, const char * source);
//destination – 指向用于存储复制内容的目标数组。
//source – 要复制的字符串。

//了解strcpy函数

//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//源字符串必须以 '\0' 结束。
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。
//学会模拟实现。

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "world";

	strcpy(arr1, arr2);	//第一个为存储复制内容的目标数组	第二个为要复制的字符串

	printf("%s\n", arr1);//world
	printf("%s\n", arr2);//world

	return 0;
}