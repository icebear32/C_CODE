//动态内存分配

//面试题 - 分析


#include <stdio.h>
#include <stdlib.h>

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
	str = NULL;//修改点
	//如果将free、str=NULL放在if语句后面，if语句没什么作用
	//真正考察的是 free 释放str指向的空间后，并不会把str置为NULL
	//free后并没有 str=NULL 的话，str被释放，但是没有置为NULL，str成为野指针
	//free后还是可以忽略条件继续执行if语句，代码就错误了
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();

	return 0;
}
/*
	答:	篡改动态内存区的内容，后果难以预料，非常危险。
		因为free(str);之后，str成为野指针,if(str != NULL)语句不起作用。
*/
