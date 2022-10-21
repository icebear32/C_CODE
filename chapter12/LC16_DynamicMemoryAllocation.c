//动态内存分配

//面试题 - 改错

//方式二
#include <stdio.h>
#include <stdlib.h>

char* GetMemory(char* p)//函数用接收str地址,返回 char* 类型
{
	p = (char*)malloc(100);//用str的地址创建100个字节动态内存空间
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);//传入str的地址,将返回的 p 地址 赋值给str
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