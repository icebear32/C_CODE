// strstr 函数 - 查找字符串
//
// char * strstr ( const char *, const char * );

//模拟实现 strstr函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	if (*p2 == '\0')//判断p2的地址是否只存在“\0”
	{
		return p1;//若p2是“\0”则返回p1的地址
	}
	while (*p1)//当*p1的地址循环到为“\0”时，结束循环
	{
		//while (*p1 == *p2)//当*p1和*p2的字符相同时进行while循环
		//进一步修改while循环
		// 判断的意思
		//以防*p1没有匹配到*p2的就到了“\0”
		//以防*p2没有查找完就到了“\0”
		//当* p1和* p2的字符相同时进行while循环
		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
		{
			//各自地址加加，向后跳一个地址，使得这个while循环继续匹配下一个各自地址的字符
			p1++;
			p2++;
		}
		p1++;
		//若上一个while循环没有判断执行，
		//证明*p1地址的字符没有对应*p2地址的字符，
		//因此要加加，跳到下一个地址的字符，用下一个字符对应*p2地址的字符
	}
}

int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";

	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("字串不存在");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}

/*
* 不足点：
	因为匹配不成功，需要再次返回到第一个b的下一个地址重新查找匹配,
	但是p1p2已经加加了，不记得从那里开始查找的，所以不要轻易改变p1p2

*/