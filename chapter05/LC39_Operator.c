//下标引用、函数调用和结构成员

/**
 * 访问一个结构的成员
 * . 结构体			    .成员名 
 * -> 结构体指针	    ->成员名
*/

//创建一个结构体类型 -struct Stu
#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 0;
	//使用struct Stu这个类型创建一个学生对象s1，并初始化
	struct Stu s1 = { "张三",20,"20201128" };


	//打印结构体内容
	//结构体变量.成员名（结构体变量 点 成员名）
	printf("%s\n",s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);

	//有点啰嗦
	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);

	//更好的打印方法
	//struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);

	return 0;
}