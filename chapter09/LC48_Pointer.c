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

//结构体的name 部分

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构体类型
struct Stu
{
	char name[20];
	int age;
};

//冒泡排序name的内容
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用 ><= 来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test4()
{
	struct Stu s[3] = { {"张飞",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	test4();

	return 0;
}