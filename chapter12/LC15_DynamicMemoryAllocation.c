//动态内存分配

//面试题 - 改错

//方式一
#include <stdio.h>
#include <stdlib.h>

void GetMemory(char** p)//函数用二级指针接收str地址
{
	*p = (char*)malloc(100);//用str的地址创建100个字节动态内存空间
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);//传入str的地址，创建动态内存空间
	strcpy(str, "hello world");
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	Test();

	return 0;
}