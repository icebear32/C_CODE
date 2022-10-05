 //指针类型的意义是什么？
//(指针占用的字节都是一样的，那不同指针存在的意义是什么？)

#include <stdio.h>

int main()
{
	/*
		可以运行，但是报警告，类型不兼容，但是可以存放
		那么是不是更加证明不同指针的作用呢?
	*/
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);

	return 0;
}