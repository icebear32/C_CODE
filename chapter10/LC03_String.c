//strlen 函数
//
//size_t strlen(const char* str);
//
//打印两个strlen计算长度的数相减

#include <stdio.h>
#include <string.h>

int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2 > str1\n");//为真
	}
	else
	{
		printf("srt1 > str2\n");//为假
	}

	return 0;
}
/*
	打印的是 str2 > str1
	因为 strlen函数 的返回类型是 size_t 类型
	size_t == unsigned int
	size_t 是无符号的int类型，所以进行加减操作得到的还是无符号数
	因为 strlen(str2) 的数小，strlen(str1)的数大
	strlen(str2) - strlen(str1) 得到是负数，但是因为是 无符号数，没有负数
	会当成正数编译，原反补码相同，所以是一个很大的数
	所以 strlen(str2) - strlen(str1) > 0 为真
	执行 printf("str2 > str1\n"); 语句
*/