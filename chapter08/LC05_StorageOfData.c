//C语言数据类型
//大小端

/**
 * 百度面试题
 * 请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
*/
#include <stdio.h>

int check_sys()
{
	int a = 1;//int类型 00000000 00000000 00000000 00000001
	char* p = (char*)&a;//将 a的地址 强制类型转换为 char* 类型，只取一个字节的内容
	if (*p == 1)//判断 p 是否为0或者1
		return 1;//为1，就是小端存储，int强制类型转换取到的是00000001
	else
		return 0;
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