//strncat函数
//
//char* strncat(char* destination, const char* source, size_t num);

//问题：“wor”后的“\0”的追加的还是怎么样？

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello\0xxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	/*
		追加后的arr1，打印是 “hello wor\0 xxxx”
		本来arr1 的“\0”后的 x 有八个，追加了三个字符后还剩四个 x 字符
		所以得到的是追加完成后的“\0”是strncat函数追加完成后主动加上去的
	*/

	return 0;
}