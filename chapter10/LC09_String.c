//strcpy函数
//
//char* strcpy(char * destination, const char * source);
//destination – 指向用于存储复制内容的目标数组。
//source – 要复制的字符串。

//strcpy函数 注意事项 2

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "a"; // 2字符（包含\0）
	char arr2[] = "world"; // 6个字符（包含\0）

	strcpy(arr1, arr2);
	/*
		写入到“arr1”时缓冲区溢出: 可写大小为“2”个字节，但写入了“6”个字节。
		因为arr1存放的是两个字符的内容，而arr2存放的是6个字符的内容
		将arr2 的复制到 arr1 上，会把arr1撑大，导致指针访问越界，
		指针访问的地址不是arr1的地址，报错
	*/

	printf("%s\n", arr1);

	return 0;
}