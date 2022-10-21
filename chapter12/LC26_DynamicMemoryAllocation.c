//动态内存分配

//柔性数组

//第二种开辟数组空间用法
//用结构体定义一个数组指针，指向一个数组
//数组 malloc 开辟空间，ralloc 将数组调整大小，开辟更大的空间，方便放入更多数组
#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));

	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr == NULL)
	{
		ps->arr = ptr;
	}
	for ( i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存 - free要注意顺序，在结构体里面的先释放，不然找不到了，有可能内存会泄漏
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}