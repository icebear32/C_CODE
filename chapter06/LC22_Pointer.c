//指针运算
//
//指针-指针
#include <stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	// strlen - 求字符串长度
	//递归–模拟实现了strlen - 计数器的方式1，递归的方式2(之前)

	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}