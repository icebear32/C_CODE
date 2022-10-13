//C语言数据类型
//大小端

/**
 * 百度面试题
 * 请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
*/

//更简单的简化
#include <stdio.h>

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}