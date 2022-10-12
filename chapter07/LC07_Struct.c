//结构体

#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
};

/**
* 问题：print1和 print2选哪个好？
* 答案是︰首选print2函数。
* 
* 原因︰函数传参的时候，参数是需要压栈的。
*		如果传递一个结构体对象的时候，结构体过大，
*		参数压栈的的系统开销比较大，所以会导致性能的下降。
* 
* 结论∶结构体传参的时候，要传结构体的地址。
*/
void Print1(struct Stu tmp) {
	printf("name: %s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele: %s \n", tmp.tele);
	printf("sex:%s \n", tmp.sex);
}

void Print2(struct Stu* ps) {
	printf("name: %s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele: %s \n", ps->tele);
	printf("sex:%s \n", ps->sex);
}

int main()
{
	struct Stu s = { "李四",40,"233284780","男" };

	//打印结构体数据
	Print1(s);
	Print2(&s);

	return 0;
}