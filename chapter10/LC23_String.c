//strncat函数
//
//char* strncat(char* destination, const char* source, size_t num);

//问题：要是追加超过字符串的长度会怎么样？

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello\0xxxxxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 8);
	printf("%s\n", arr1);
	/*
		追加后的arr1，打印是 “hello world\0 xxxxxx”
		本来arr1 的“\0”后的 x 有十二个，追加了 world 字符 和 \0 后还剩 6个 x 字符
		所以得到的是追加完成的“\0”后就不再追加，
		所以后面的 6 个 x 字符没有被覆盖
		所以只会追加到 “\0”，\0 后不再追加
	*/

	return 0;
}