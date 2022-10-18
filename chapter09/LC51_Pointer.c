//笔试题

#include <stdio.h>

int main()
{
	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	printf("%d\n", sizeof(arr));			//sizeof计算机的是数组大小，6 * 1 = 6字节

	printf("%d\n", sizeof(arr + 0));		//4/8 arr是首元素的地址，arr+0还是首元素的地址地址的大小是4/8字节

	printf("%d\n", sizeof(*arr));			//1 arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节

	printf("%d\n", sizeof(arr[1]));			//1

	printf("%d\n", sizeof(&arr));			//4/8 &arr虽然是数组的地址，但还是地址，地址大小是4/8个字节

	printf("%d\n", sizeof(&arr + 1));		//4/8 &arr+1是跳过整个数组后的地址，地址大小是4/8个字节

	printf("%d \n", sizeof(&arr[0] + 1));	//4/8 第二个元素的地址

	return 0;
}