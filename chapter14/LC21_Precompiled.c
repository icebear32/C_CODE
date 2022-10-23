#include <stdio.h>

int main()
{
	/**
	* 2.多个分支的条件编译
	* #if 常量表达式
	*	 ...
	* # elif 常量表达式
	*	...
	* #else
	*	...
	* #endif
	*/
#if 1 == 1
	printf("haha\n");
#elif 2 == 2
	printf("hehe\n");
#else
	printf("嘿嘿\n");
#endif

	return 0;
}