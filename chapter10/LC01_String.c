//strlen 函数
//
//size_t strlen(const char* str);
//
//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）
//学会strlen函数的模拟实现
//
//了解strlen 函数


#include <stdio.h>
#include <string.h>

int main()
{
	int len = strlen("abcdef");
	//字符串已经 '\0' 作为结束标志
	//strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。

	printf("%d\n", len);// 6

	return 0;
}