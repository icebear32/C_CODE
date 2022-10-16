//指针参数

//一级指针传参

//使用一级指针传参数的函数
/*
    当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
    比如：
        void test1(int *p) { }	//test1函数能接收什么参数?
        void test2(char* p) { }	//test2函数能接收什么参数?  
*/
#include <stdio.h>

void test1(int* p)//接受一个整型地址
{

}

void test2(char* p)//接受一个char类型的地址
{

}
int main()
{
	int a = 10;
	int* p1 = &a;
	test1(&a);//ok	&a	取地址a的地址
	test1(p1);//ok	p1	a的地址

	char ch = 'w';
	char* pc = &ch;
	test2(&ch);//ok	&ch	取地址 ch 的地址
	test2(pc);//ok	pc	ch 的地址

	return 0;
}