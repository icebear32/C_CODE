//练习题
//
//题目名称 :	字符串逆序
//题目内容 :	写一个函数，可以逆序一个字符串的内容。

#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);

	char* left = str;
	char* right = str + len - 1;

	//当left小于right的时候，left与right交换
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		tmp = *left;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	//abcdef --> fedcba
	gets(arr);//读取一行
	//逆序函数
	reverse(arr);

	printf("逆序后的字符串：%s\n", arr);

	return 0;
}