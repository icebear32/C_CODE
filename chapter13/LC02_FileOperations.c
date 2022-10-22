//文件操作

#include <stdio.h>

int main()
{
	//打开文件test.txt
	//相对路径
	//..	表示上一级路径
	//.		表示当前路径
	//fopen("../../test.txt", "r");
	fopen("test.txt", "r");
	
	//绝对路径的写法
	//fopen("E:\\VS_code\\文件操作\\test.txt", "r");

	return 0;
}