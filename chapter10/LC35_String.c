//strerror函数

//例子 - 使用场景

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//如果打开文件不成功，报错误信息，可以知道什么错误
	}
	else
	{
		printf("open file sucess\n");//打开成功
	}

	return 0;
}