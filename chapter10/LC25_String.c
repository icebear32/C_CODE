// strstr 函数 - 查找字符串
//
// char * strstr ( const char *, const char * );
//
//介绍 strstr函数


#include <stdio.h>
#include <string.h>

int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";
	
	char* ret = strstr(p1, p2);
	if (ret == NULL)
		printf("字符串不存在");
	else
		printf("%s\n", ret);
	/*
	* 打印的是 def 的 d 的地址
	* 向后打印相应的字符
	*/

	return 0;
}