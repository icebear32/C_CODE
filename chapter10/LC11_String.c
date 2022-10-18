//strcat函数
//
//char * strcat ( char * destination, const char * source );

//Appends a copy of the source string to the destination string.The terminating null character in destination is overwritten by the first character of source, and a null - character is included at the end ofthe new string formed by the concatenation of both in destination.
//源字符串必须以‘\0'结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何 ?

//目标空间必须有足够的大，能容纳下源字符串的内容。目标空间必须可修改。

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char arr1[] = "hello";
// 	char arr2[] = "world";

// 	//代码错误
// 	strcat(arr1, arr2);
// 	//程序奔溃,本来arr1存放的是6个字符，要往arr1加入六个字符
// 	//arr1没有足够的空间存放
// 	//强制添加arr2的字符到arr1后面
// 	//追加之后造成程序奔溃
// 	//造成了越界访问
	
// 	printf("%s\n", arr1);

// 	return 0;
// }

//修改
#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello";//将arr1变得足够大，可以放下追加的字符串
	char arr2[] = "world";

	strcat(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}