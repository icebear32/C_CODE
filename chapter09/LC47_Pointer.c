//优化冒泡排序
//函数库的qsort函数的简化
//void qsort(void base,
//	size_t num,
//	size_t width
//	int(*cmp)(const void* e1, const void* e2)
//);
//参数： 1 待排序数组，排序之后的结果仍放在这个数组中
//2 数组中待排序元素数量
//3 各元素的占用空间大小（单位为字节）
//4 指向函数的指针，用于确定排序的顺序（需要用户自定义一个比较函数）

//结构体的age 部分

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体类型
struct Stu
{
	char name[20];
	int age;
};

//冒泡排序age的内容
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s[3] = { {"张飞",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	test3();

	return 0;
}
