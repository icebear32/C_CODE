//strcpy函数
//
//char* strcpy(char * destination, const char * source);
//destination – 指向用于存储复制内容的目标数组。
//source – 要复制的字符串。

//strcpy函数 注意事项 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abcdefghi";
	//char arr2[] = "world";
	//错误示范
	char arr2[] = { 'w','o','r','l','d' };
	strcpy(arr1, arr2);//错误原因：没有为字符串“arr2”添加字符串零终止符

	printf("%s\n", arr1);

	return 0;
}