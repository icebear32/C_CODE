//结构体的声明

#include <stdio.h>

//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象)
//描述学生:属性-名字+电话+性别+年龄

struct Stu
{
	//成员变量
	char name[20];//名字
	char tele[12];//电话
	char sex[10];//性别
	int age;//年龄
}s4, s5, s6; //s3, s4, a5全局变量	//分号不能丢

struct Stu s3;

int main()
{
	//创建的结构体变量
	struct Stu s1;//局部变量
	struct Stu s2;//局部变量

	return 0;
}