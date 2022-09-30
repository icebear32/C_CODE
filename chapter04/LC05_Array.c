//一维数组的使用
//对于数组使用的一个操作符：[ ] 下标引用操作符。它其实就数组访问的操作符。

//打印数组内容
#include <stdio.h>
#include <string.h>

int main() 
{
	char arr[] = "abcdef";
	//printf("%c\n", arr[3]);
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%c\n", arr[i]);
	}

	//用strlen
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c\n", arr[i]);
	}

	//用sizeof
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%c\n", arr[i]);
	}

	return 0;
}
