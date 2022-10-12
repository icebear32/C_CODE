//结构体

//typedef把结构体重新定一个名字，叫Stu，Stu是一个类型
#include <stdio.h>
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

int main()
{
	struct Stu s;//局部变量
	Stu s2;

	return 0;
}