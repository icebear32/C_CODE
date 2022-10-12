//结构体

/*
* 结构的声明
struct tag
{
	member-list;
}variable-list;

*/

#include <stdio.h>
//描述—个学生：一些数据
//名字
//年龄
//电话
//性别
//	struct结构体关键字		stu-结构体标签		struct stu -结构体类型
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

int main()
{
	struct Stu s;

	return 0;
}