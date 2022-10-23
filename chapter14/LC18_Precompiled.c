/*这条指令用于移除一个宏定义*/
#include <stdio.h>

#define MAX 100

int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	//printf("MAX = %d\n", MAX);//报错：“MAX” : 未声明的标识符
	/**
	* #undef NAME
	* 如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除。
	*
	*/

	return 0;
}