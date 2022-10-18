//strcpy函数
//
//char* strcpy(char * destination, const char * source);
//destination – 指向用于存储复制内容的目标数组。
//source – 要复制的字符串。

//自定义strcpy函数 - my_strcpy函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;
	while (*src != '\0')	//遇到“\0”停止循环
	{
		*dest++ = *src++;	//将要复制的一个字符 放入 存储复制内容的目标数组
	}
	*dest = *src;//'\0'		最后将'\0'	放入 存储复制内容的目标数组

	return ret;
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "world";

	my_strcpy(arr1, arr2);	//第一个为存储复制内容的目标数组	第二个为要复制的字符串

	printf("%s\n", arr1);//world
	printf("%s\n", arr2);//world

	return 0;
}