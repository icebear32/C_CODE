//指针参数

//二级指针传参

//使用二级指针传参数的函数
#include <stdio.h>
void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}
int main()
{
	int n = 10;
	int* p = &n;//一级指针
	int** pp = &p;//二级指针
	test(pp);
	test(&p);
	return 0;
}
