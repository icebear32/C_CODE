//结构体练习题
// 
//下面程序的输出结果是:(c)
//	A.zhang
//	B.zhao
//	C.wang
//	D.18

#include <stdio.h>

struct stu
{
	int num;
	char name[10];
	int age;
};

void fun(struct stu* p)
{
	printf("%s\n", (*p).name);
	return;
}

int main()
{
	struct stu students[3] = {
		{9801,"zhang",20},
		{9802,"wang",19},
		{9803,"zhao",18}
	};
	fun(students + 1);

	return 0;
}