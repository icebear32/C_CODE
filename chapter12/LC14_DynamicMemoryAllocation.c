//动态内存分配

//面试题 - 分析

#include <stdio.h>
#include <stdlib.h>

void GetMemory(char* p)//函数得到的是NULL，而不是str的地址
{
	p = (char*)malloc(100);//开辟空间后，函数结束丢弃 p
	//而且传入的 str 没有发生任何变化，仍然是NULL值
}

void Test(void)
{
	char* str = NULL;
	GetMemory(str);//传值操作，而不是传址操作，函数没有得到地址
	//函数没有改变str，仍然是NULL值
	strcpy(str, "hello world");//没有进行到这一步，程序崩溃
	printf(str);//没有进行到这一步，程序崩溃
	//没有free(str)释放内存
}

int main()
{
	Test();
	/*
		1.运行代码程序会出现崩溃的现象
		2.程序存在内存泄漏的问题
		str以值传递的形式给p
		p是GetMemory函数的形参，只能函数内部有效
		等GetMemory函数返回之后，动态开辟内存尚未释放
		并且无法找到，所以会造成内存泄漏

	*/

	return 0;
}