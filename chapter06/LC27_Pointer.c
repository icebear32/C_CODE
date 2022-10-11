//指针和数组

/*
	//1.&arr-&数组名，数组名不是首元素的地址-数组名表示整个数组，&数组名取出的是整个数组的地址
	//2.sizeof(arr) - sizeof(数组名)·数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
*/
//arr、& arr[0]和& arr的区别

#include <stdio.h>

int main()
{
	/*
		打印的都是首元素地址
		运行的时候看不出不同
	*/
	int arr[10] = { 0 };

	printf("%p\n", arr);//地址-首元素地址

	printf("%p\n", &arr[0]);//首元素地址

	printf("%p\n", &arr);//整个数组的地址

	return 0;
}