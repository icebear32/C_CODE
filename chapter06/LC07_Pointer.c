//指针+-整数

#include <stdio.h>

int main()
{
	/*
		指针类型决定了:指针走一步走多远（指针的步长)
			int* p;			p+1->4
			char* p;		p+1 --> 1
			double* p;		p+1-->8

	*/
	int a = 0x11223344; 
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);

	printf("%p\n", pc);
	printf("%p\n", pc + 1);

	return 0;
}

//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）。