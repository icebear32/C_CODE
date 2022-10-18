//笔试题


#include <stdio.h>

int main()
{
	char* p = "abcdef";

	printf("%d\n", sizeof(p)); // 4/8 
	//p存放的是数组，是首元素地址，计算指针变量 p（首元素地址） 的大小

	printf("%d\n", sizeof(p + 1)); //4/8 - p+1 得到的是字符b的地址

	printf("%d\n", sizeof(*p)); //1 *p 就是字符串的第一个字符 - 'a'

	printf("%d\n", sizeof(p[0])); // 1 int arr[10];   arr[0] == *(arr+0)   p[0] == *(p+0) == 'a'

	printf("%d\n", sizeof(&p)); // 4/8 &p是一个数组首元素地址

	printf("%d\n", sizeof(&p + 1)); // 4/8 (&p + 1)是跳过一个数组的地址

	printf("%d\n", sizeof(&p[0] + 1)); // 4/8 (&p[0] + 1)是数组里跳过一个元素的地址

	return 0;
}