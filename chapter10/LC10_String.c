//strcpy函数
//
//char* strcpy(char * destination, const char * source);
//destination – 指向用于存储复制内容的目标数组。
//source – 要复制的字符串。

//strcpy函数 注意事项 3

#include <stdio.h>
#include <string.h>

int main()
{
	//char arr1[] = "abcdefghi"; //正确 空间是放在数组，是可以改变的
	//错误示范
	char *arr1 = "abcdefghi";//arr1 指向的是常量字符串，是不可变的
	//强行运行奔溃

	char arr2[] = "world";

	strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}