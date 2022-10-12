//结构体

//不建议使用全局的结构体变量
#include <stdio.h>
 
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3 是全局的结构体变量

int main()
{
	struct Stu s;//局部变量

	return 0;
}