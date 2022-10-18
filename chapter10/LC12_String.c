//strcat函数
//
//char * strcat ( char * destination, const char * source );

//Appends a copy of the source string to the destination string.The terminating null character in destination is overwritten by the first character of source, and a null - character is included at the end ofthe new string formed by the concatenation of both in destination.
//源字符串必须以‘\0'结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//字符串自己给自己追加，如何 ?

//strcat函数注意事项：源字符串必须以‘\0'结束。

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello\0xxxxxxxx";
	char arr2[] = "world";//strcat函数要 arr2 也要“\0”结束

	strcat(arr1, arr2);
	//因为strcat函数在源字符串遇到“\0”的地方追加字符串
	//所以arr1遇到“\0”后在“\0”的地方（把源字符串“\0”覆盖）追加arr2
	//而arr2也把“\0”追加到arr1
	//而arr1后的xxxxxxxx因为前面的“world\0”覆盖掉而没有打印出来
	//但仍在arr1后面还有没有被覆盖的x

	printf("%s\n", arr1);//helloworld

	return 0;
}