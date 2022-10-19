//strtok函数 - 分割函数
//
//用法

#include <stdio.h>
#include <string.h>

/*
* 注意点：
	strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
	
	strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
	
	strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。

*/

int main()
{
	char arr[] = "lqbz@bili.com";
	char* p = "@.";

	/*
		lqbz @ bili . com
		strtok函数的第一个参数不为 NULL ，
		找到标记@，将@改成\0结尾，返回一个指向这个标记@的指针
		然后打印内容 lqbz ，遇到\0停止打印

	*/
	char* ret = strtok(arr, p);
	printf("%s\n", ret);

	/*
		lqbz @ ( @ - > '\0' )
		bili . com
		strtok函数的第一个参数为 NULL ，
		找到标记“.”，将“.”改成\0结尾，返回一个指向这个标记“.”的指针
		然后打印内容 bili ，遇到\0停止打印
	*/
	ret = strtok(NULL, p);
	printf("%s\n", ret);

	/*
		lqbz @
		bili . ( . - > '\0' )
		com\0
		strtok函数的第一个参数为 NULL ，
		然后打印内容com，遇到\0停止打印，后面没有内容可切割，停止strtok函数,返回NULL空指针
		然后打印内容 com ，遇到\0停止打印
	*/
	ret = strtok(NULL, p);
	printf("%s\n", ret);

	return 0;
}
