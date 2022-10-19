// strstr 函数 - 查找字符串
//
// char * strstr ( const char *, const char * );
//
//介绍 strstr函数

#include <stdio.h>
#include <string.h>

int main()
{
	char* p1 = "abcdefabcdef";
	char* p2 = "def";

	char* ret = strstr(p1, p2);
	if (ret == NULL)
		printf("字符串不存在");
	else
		printf("%s\n", ret);
	/*
	* 查找的字符串在源字符串中有两个相同的
	* 仍然找到 第一个匹配的字符串 的 d 的地址
	* 打印的是 defabcdef 的 d 的地址
	* 向后打印相应的字符 - defabcdef
	*/

	return 0;
}