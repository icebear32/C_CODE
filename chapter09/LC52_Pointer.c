//笔试题

#include <stdio.h>

int main()
{
	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e','f' };

	//strlen 求的是长度，遇到'\0'停止

	printf("%d\n", strlen(arr));//随机值
	/*
		数组后面没有'\0'，strlen 函数一直继续求得'\0'，
		所以'a', 'b', 'c', 'd', 'e','f'后的长度不清楚
		所以是随机值
	*/

	printf("%d \n", strlen(arr + 0));//随机值 
	/*
	*	arr是首元素的地址，arr+0还是首元素的地址
	*	所以 strlen 函数从首元素开始求长度
		数组后面没有'\0'，一直继续求得'\0'，
		所以'a', 'b', 'c', 'd', 'e','f'后的长度不清楚
		所以是随机值
	*/

	//printf("%d\n", strlen(*arr)); //err
	// *arr 是arr首元素地址，解引用得到首元素地址的'a'
	// 'a'的码值是 '97'，strlen函数直接调用'97'的地址去求长度
	// 属于非法调用，间接寻址

	//printf("%d\n", strlen(arr[1])); //err
	// arr[1] 是arr的第二个元素，得到的是'b'
	// 'b'的码值是 '98'，strlen函数直接调用'98'的地址去求长度
	// 属于非法调用，间接寻址

	printf("%d\n", strlen(&arr));//随机值
	//首元素地址开始

	printf("%d\n", strlen(&arr + 1));//随机值-6
	//&arr是整个数组的地址，&arr+1跳过整个数组
	//所以strlen(&arr + 1)是从'f'后开始求长度
	//所以是随机值减6

	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
	//&arr[0]是数组的第一个元素地址，&arr[0]+1跳过数组的一个元素
	//所以strlen(&arr + 1)是从'b'后开始求长度
	//所以是随机值减1

	return 0;
}