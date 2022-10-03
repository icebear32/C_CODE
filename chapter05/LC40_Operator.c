//下标引用、函数调用和结构成员

#include <stdio.h>

struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};

void set_age1(struct Stu stu)
{
	stu.age = 18;
	printf("自定义的set_age1函数的age = %d\n", stu.age);
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 19;//结构成员访问
	printf("自定义的set_age2函数的age = %d\n", pStu->age);
};
int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//
	
	stu.age = 20;
	printf("age = %d\n", stu.age);
	set_age1(stu);

	pStu->age = 20;
	printf("age = %d\n", pStu->age);
	set_age2(pStu);
	
	return 0;
}