//strlen 函数
//size_t strlen(const char* str);

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	int len = strlen(arr);
	printf("%d\n",len);//随机值
	// 遇到警告： 没有为字符串“arr”添加字符串零终止符
	// 因为没有设置到结束符“\0”
	// 因为strlen没有遇到结束符“\0”，所以一直计算数组长度直到遇到“\0”
	// 所以无法预测值，是随机值

	return 0;
}