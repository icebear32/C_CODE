#include <stdio.h>

void Add(int* p)
{
	(*p)++;
	/*
		先用括号括起来*p，因为++的优先级大于*
		p会先和++运算再解引用
		不然会出错

	*/
}

int main()
{
	int num = 0;
	Add(&num);
	//为什么不是传值而是传址操作？
	//因为传址是对地址进行操作
	//传值操作是传入一个值，在函数中会创建一个新的变量，就会有一个新地址
	//新变量加加操作后返回就销毁，在下一次调用函数就还是一样的数，不会加加

	printf("num = %d\n", num);//1
	Add(&num);
	printf("num = %d\n", num);//2
	Add(&num);
	printf("num = %d\n", num);//3

	return 0;
}