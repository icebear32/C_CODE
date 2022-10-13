//C语言数据类型

//练习6 - 代码输出的是什么？
#include <stdio.h>
#include <string.h>

/*
	for循环的是：
	-1 -2 -3 到 -127 再到 -128 
	继续循环，继续加
	再从 -128 到 127 直到 0  
  	循环1000 次
	停止循环后
	strlen函数遇到 \0 停止（找到0就停止）
*/

int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));//遇到 \0 停止，打印的是255

	return 0;
}