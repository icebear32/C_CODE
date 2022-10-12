//结构体练习题

//题目名称;
//下面程序要求输出结构体中成员a的数据, 以下不能填入横线处的内容是(B)
//题目内容:
//	A.a.a
//	B.*p.a
//	C.p->a.
//	D.(*p).a

#include <stdio.h>

struct S
{
	int a;
	int b;
};

int main()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", a.a);

	//printf("%d\n", *p.a);//err
	//应该用括号括起来(*p).a,优先级问题
	//不加括号就会变成* (p.a)

	printf("%d\n", p->a);
	printf("%d\n", (*p).a);

	return 0;
}