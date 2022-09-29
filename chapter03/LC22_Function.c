//字符串逆序(递归实现)
//题目内容:
//编写一个函数reverse_string(char* string)(递归实现)
//实现 : 将参数字符串中的字符反向排列。
//要求 : 不能使用c函数库中的字符串操作函数。

#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

/*
* 以 abcdef 为例
	第一步将 数组第一个元素a（最左边）  赋值给 tmp
	第二步将最右边的元素 f 放到数组的前面，将f的位置用“\0”代替
	第三步迭代调用该函数
		将取得数组第二个元素b（最左边）的地址传入reverse_string函数
		第一步将 数组第一个元素b（最左边）  赋值给 tmp
		第二步将最右边的元素 e 放到数组的前面，将 e 的位置用“\0”代替
		第三步迭代调用该函数
		...
		当if语句不执行停止递归调用
		将存放在 tmp 的字符串放回“\0”的位置
	
	以此来实现字符串逆序
*/
void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdef";//fedbca
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}