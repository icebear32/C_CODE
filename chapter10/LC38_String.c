//memcpy 函数

//memcpy 函数对结构体数组操作

#include <stdio.h>
#include <string.h>

struct S
{
	char name[20];
	int age;
};

int main()
{
	struct S arr1[] = { {"张三",20},{"李四",30} };
	struct S arr2[3] = { 0 };

	memcpy(arr2, arr1, sizeof(arr1));

	return 0;
}