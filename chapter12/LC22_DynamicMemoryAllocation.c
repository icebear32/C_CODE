//动态内存分配

//C/C++程序的内存开辟

#include <stdio.h>
#include <stdlib.h>

int globaVar = 1;
static int staticGlobalVar = 1;

void Test()
{
	static int staticVar = 1;
	int localVar	= 1;
	int num1[10]	= { 1,2,3,4 };

	char cahr2[]	= "abcd";
	char* pChar3	= "abcd";

	int* ptr1		= (int*)malloc(sizeof(int) * 4);
	int* ptr2		= (int*)calloc(4, sizeof(int));
	int* ptr3		= (int*)realloc(ptr2, sizeof(int) * 4);

	free(ptr1);
	free(ptr3);
}

int main()
{
	Test();

	return 0;
}