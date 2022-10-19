//strtok函数 - 分割函数
//
//参数解释

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "lqbz@bili.com";
	char* p = "@.";

	return 0;
}

/*
	第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
	char arr[] = "lqbz@bili.com";		char* p = "@.";
	                    |                      |
	char *strtok(  char *str,              const char *delim);
	
*/