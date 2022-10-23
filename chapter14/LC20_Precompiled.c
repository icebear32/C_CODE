/*常见的条件编译指令：*/

#include <stdio.h>

int main()
{
	/** 1.单个分支的条件编译
	*	常量表达式由预处理器求值。
	* #if 常量表达式
	*	 ...
	* #endif
	*
	*/
#if 0
	printf("0\n");
#endif

#if 1
	printf("1\n");
#endif

#if 2
	printf("2\n");
#endif

	return 0;
}