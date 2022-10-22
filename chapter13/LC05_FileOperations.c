//文件操作
//文件的顺序读写

/*
	头文件：include<stdio.h>

	fgetc()函数用于从文件流中读取一个字符，其原型为：
		int fgetc(FILE * stream);

	【参数】stream为文件指针。
	【返回值】成功返回读取到的字符，读到文件结尾时返回EOF。

	说明：fget() 返回的字符实际上是文件流（ FILE 结构体）中位置指针所指向的字符。fgetc()读取错误时，返回EOF并设置文件错误标志位；ferror()函数可检测此错误。

*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c", fgetc(pfRead));//h
	printf("%c", fgetc(pfRead));//e
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//l
	printf("%c", fgetc(pfRead));//o

	//关闭文件
	fclose(pfRead);
	pfRead = NULL;

	return 0;
}