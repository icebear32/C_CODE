//动态内存分配

//面试题 - 分析代码

#include <stdio.h>
#include <stdlib.h>

void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	//代码可以执行，但是忘记释放动态开辟的内存，导致内存泄漏了
	// 
	//改正点 - 释放空间
	free(str);
	str = NULL;
}

int main()
{
	Test();

	return 0;
}
/*
	(1)能够输出hello
	(2)内存泄漏
*/