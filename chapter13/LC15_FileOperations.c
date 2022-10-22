//文件操作
//文件结束的判定

/*
	> 被错误使用的 feof函数
	
	> 牢记：
		在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。 
		而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。 
*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//strerror - 把错误码对应的错误信息的字符串地址返回
	//printf("%s\n", strerror(errno));

	//peror - 比strerror简单，不用引用头文件
	//peror直接把错误信息打印出来，还可以定制想要的提示信息
	FILE* pf = fopen("test2.txt", "r");
	if (pf==NULL)
	{
		perror("hehe");// - hehe: No such file or directory
		return 0;
	}

	//读文件

	fclose(pf);
	pf = NULL;

	return 0;
}