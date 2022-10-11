/*
	对于二级指针的运算有:
	*ppa 通过对ppa中的地址进行解引用，这样找到的是 pa , *ppa 其实访问的就是pa.
	int b = 20;
	*ppa = &b; //等价于pa = &b;
	**ppa先通过*ppa找到pa ,然后对pa进行解引用操作∶*pa，那找到的是a.
	*ppa = 30;
	//等价于*pa = 30;//等价于a = 30 ;

*/
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//ppa就是二级指针
	//int*** pppa = &ppa;//三级指针

	//怎么用二级指针
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);

	int b = 20;
	*ppa = &b; //等价于pa = &b;

	*ppa = 30;
	// 等价于 * pa = 30; // 等价于a = 30;


	return 0;
}