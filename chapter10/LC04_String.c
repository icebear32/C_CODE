//strlen 函数
//
//size_t strlen(const char* str);

//自定义strlen 函数 - my_strlen 函数

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strlen(const char* str)//因为传入的是常量数组地址，不可变，用 const
{
	int count = 0;	//计算字符串的长度
	assert(str != NULL);	//检测传入地址参数是否为空

	while (*str != '\0')	//循环遍历每个字符串地址，若遇到'\0'停止循环
	{
		count++;	//每循环一次就+1，计算长度
		str++;	//对地址+1，跳到下一个地址，继续循环
	}
	return count;	//返回计算的数
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);

	printf("%d\n", len);//6

	return 0;
}