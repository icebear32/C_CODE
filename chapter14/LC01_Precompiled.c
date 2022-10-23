#define Max 100

//预编译符号 这些预定义符号都是语言内置的。
#include <stdio.h>

int main()
{
	/*
		__FILE__      //进行编译的源文件
		__LINE__     //文件当前的行号
		__DATE__    //文件被编译的日期
		__TIME__    //文件被编译的时间
		__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义
	*/
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	//printf("%s\n", __STDC__);//报错。未定义，VS没有，Linux又匹配

	return 0;
}