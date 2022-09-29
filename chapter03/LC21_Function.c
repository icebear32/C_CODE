//字符串逆序(递归实现)
//题目内容:
//编写一个函数reverse_string(char* string)(递归实现)
//实现 : 将参数字符串中的字符反向排列。
//要求 : 不能使用c函数库中的字符串操作函数。



#include <stdio.h>
#include <string.h>

int my_strlen(char* str)	//接收数组首元素地址，是一个 char* 类型
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])	//接收一个数组地址
{
	int left = 0;	//左边的数组元素
	int right = my_strlen(arr) - 1;	//右边的数组元素
	//用自定义my_strlen函数求出数组元素个数
	//最右边的的元素就等于元素个数减一

	//进行左右字符串逆序交换
	while (left < right)	//当最左边的小于右边，执行while循环
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";//fedbca
	reverse_string(arr);	//字符串逆序 - 传入数组首元素地址参数
	printf("%s\n", arr);

	return 0;
}