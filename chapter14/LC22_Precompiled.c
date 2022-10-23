#include <stdio.h>

#define DEBUG 0

int main()
{
	/**
	* 3.判断是否被定义 - 定义就执行
	* #if defined(symbol) 
	* #ifdef symbol 
	*/
#if defined(DEBUG)
	printf("已定义\n");
#endif
	
	/**
	* 3.判断是否被定义 - 没定义就执行
	* #if !defined(symbol)
	* #ifdef symbol
	*/
#if !defined(DEBUGS)
	printf("没定义\n");
#endif

	return 0;
}