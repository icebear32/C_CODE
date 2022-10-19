//strerror函数

//返回错误码，所对应的错误信息。

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//错误码	错误信息
	// 0		No error
	// 1		Operation not permitted
	// 2		No such file or directory
	// ...
	//errno是一个全局的错误码的变量
	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
	//char* str = strerror(0);
	//char* str = strerror(1);
	//char* str = strerror(2);
	char* str = strerror(errno);
	printf("%s\n", str);
	
	return 0;
}