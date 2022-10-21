//动态内存分配

//柔性数组

//sizeof 返回的这种结构大小不包括柔性数组的内存
#include <stdio.h>

struct S
{
	int n;
	int arr[0];
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//4

	return 0;
}