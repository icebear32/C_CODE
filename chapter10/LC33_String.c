//strtok函数 - 分割函数

//代码优化
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "lqbz@bili.com";
	char* p = "@.";

	/*
		ret = strtok(arr, p);//开始第一次初始化，以后不会调用
		开始循环：
			ret != NULL;//进行判断，不为NULL继续下一步操作
			printf("%s\n", ret);//打印分割后的字符串
			ret = strtok(NULL, p)//进行对标记符设为NULL，开始查找下一个标记符并改为\0的strtok操作
	*/
	for (char* ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	return 0;
}