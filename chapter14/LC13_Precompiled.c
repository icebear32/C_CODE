/*每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。*/
#include <stdio.h>

#define TEST(x,y) printf("test\n")

int main()
{
	TEST(2,3);
	TEST(3,4);
	TEST(56,7);
	//相当于
	printf("test\n");
	printf("test\n");
	printf("test\n");
	/**
	* 直接将宏定义的代码插入到程序中，替换
	* 不会像函数只定义一个，使用的时候调用就好了
	* 如果宏定义的很大边幅，会导致程序的长度，影响程序的运行
	*/

	return 0;
}