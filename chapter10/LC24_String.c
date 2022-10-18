//strncmp函数
//
//int strncmp(const char* str1, const char* str2, size_t num);
//
// 比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完。

//介绍 strncmp函数

#include <stdio.h>
#include <string.h>

int main()
{
	//strncmp - 字符串比较
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";

	//int ret = strcmp(p1, p2, 3);
	int ret1 = strncmp(p1, p2, 3);
	printf("%d\n", ret1);// 0 
	//因为比较的是两个字符串前三个的字符
	//前三个字符相同，所以返回 0

	int ret2 = strncmp(p1, p2, 4);
	printf("%d\n", ret2);//-1
	//因为比较的是两个字符串前四个的字符
	//前三个字符相同，所以返回 -1

	return 0;
}
