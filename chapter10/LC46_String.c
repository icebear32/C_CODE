//memcmp函数

/*
	* 函数声明：int memcmp ( const void * ptr1, const void * ptr2, size_t num );

	* 函数说明： memcmp()用来比较s1 和s2 所指的内存区间前n 个字符。

	* 返回值：若参数s1 和s2 所指的内存内容都完全相同则返回0 值。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。

*/

#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "abcdef";
	char str2[] = "abcdeq";
	
	int str3[] = { 1,2,3,4,5,6 };
	int str4[] = { 1,2,3,4,5,9 };

	printf("%d\n", memcmp(str1, str2, 5));
	printf("%d\n", memcmp(str1, str2, 6));

	printf("%d\n", memcmp(str3, str4, 5));
	printf("%d\n", memcmp(str3, str4, 24));//因为比较的是字节数，int有四个字节，所以要运算

	return 0;
}