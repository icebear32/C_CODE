//strcmp函数
//
//int strcmp(const char* str1, const char* str2, size_t num);
//
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完

//自定义strcmp函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);//指针必须保持有效性，断言可以看出指针是否为空指针，空指针直接结束程序
	
	//比较
	while (*str1 == *str2)	//判断字符串有没有相同的
	{
		if (*str1 == '\0')	//直到第一个遇到 '\0'，那第二个也是 '\0'， '\0'表示结束，两个字符串相等
		{
			return 0;//相等
		}
		str1++;	//下一次循环的地址
		str2++;	//下一次循环的地址
	}

	//上一循环循环到没有相同的字符
	if (*str1 > *str2)	//判断第一个字符串是否大于第二个字符串
	{
		return 1;//大于
	}
	else
	{
		return -1;//小于
	}
}

int main()
{
	char* p1 = "abc";
	char* p2 = "abc";

	int ret1 = my_strcmp(p1, p2);
	printf("ret1 = %d\n",ret1);

	char* p3 = "abcdef";
	char* p4 = "abc";

	int ret2 = my_strcmp(p3, p4);
	printf("ret1 = %d\n", ret2);

	char* p5 = "abc";
	char* p6 = "abcdef";

	int ret3 = my_strcmp(p5, p6);
	printf("ret1 = %d\n", ret3);

	return 0;
}