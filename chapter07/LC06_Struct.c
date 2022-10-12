//打印结构体内容

//结构体变量访问成员 结构变量的成员是通过点操作符（.）访问的。
//点操作符接受两个操作数

#include <stdio.h>

struct stu
{
	char name[20];
	int age;
};

int main()
{
	struct stu s = { "zhangsan", 20 };
	printf("%s \n", s.name);
	printf("%d \n", s.age);

	return 0;
}
