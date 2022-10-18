//strcpy函数
//自定义strcpy函数 - my_strcpy函数
//简化代码
#include <stdio.h>
#include <string.h>
#include <assert.h>

//返回值是char* 类型
char* my_strcpy(char* dest, const char* src)//常量指针，目的地地址会发生变化，但是源头地址不会发生变化，所以加const修饰更安全 
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含'\0'

	//	while (*src != '\0')	//遇到“\0”停止循环
	//	{
	//		*dest++ = *src++;	//将要复制的一个字符 放入 存储复制内容的目标数组
	//	}
	//	*dest = *src;//'\0'		最后将'\0'	放入 存储复制内容的目标数组
	//}
	// 将代码合并
	// while循环将 复制 *src 的一个字符 放入 *dest 存储复制内容的目标数组
	// 然后++进入到下一个字符
	// 直到循环到 *src 的 '\0'
	// '\0'还是会赋值给 *dest
	// 括号的表达式依然保持 *dest 为 '\0'
	// while循环判断到 '\0' 为假，终止循环
	while (*dest++ = *src++)
	{
		;
		//*dest++ = *src++;
	}
	//*dest = *src;//'\0'
	//返回目的空间的起始地址
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