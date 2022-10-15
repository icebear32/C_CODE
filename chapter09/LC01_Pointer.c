#include <stdio.h>

/*
* 运行的时候没报错，但是会有警告

	运行结果是1 --> 因为设置的是32位运行
		结果是2 --> 因为设置的是64位

*/
void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}

int main()
{
	int arr[10] = { 0 };
	test(arr);

	return 0;
}