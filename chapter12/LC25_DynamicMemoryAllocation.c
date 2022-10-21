//动态内存分配

//柔性数组

//柔性数组开辟数组空间的用法
//直接结构体开辟整体空间，然后分配给其他结构体，剩下给数组，可以再开辟新空间给数组
#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int arr[];
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//开辟24个字节空间
	ps->n = 100;
	int i = 0;
	for ( i = 0; i < 5; i++)//赋值 0 1 2 3 4 给数组
	{
		ps->arr[i] = i;//0 1 2 3 4
	}

	struct S* ptr = realloc(ps, 44);//ps 重新开辟新的空间赋值给ptr
	if (ptr != NULL)
	{
		ps = ptr;
	}

	for ( i = 5; i < 5; i++)//添加新的数组元素
	{
		ps->arr[i] = i;
	}

	for ( i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);//打印数组元素
	}

	//释放
	free(ps);
	ps = NULL;

	return 0;
}