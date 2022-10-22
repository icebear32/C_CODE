//文件操作
//文件的随机读写

//ftell函数

/*
	ftell() 函数的声明:long int ftell(FILE *stream);

	ftell() 函数的描述:返回给定流 stream 的当前文件位置

	ftell() 函数的参数:stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流

	ftell() 函数的返回值: 该函数返回位置标识符的当前值。如果发生错误，则返回 -1L，全局变量 errno 被设置为一个正值。
*/

#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	
	//1.定位文件指针
	fseek(pf, 2, SEEK_SET);//c

	//2.返回当前文件位置
	int pos = ftell(pf);
	printf("%d\n", pos);//2 - 返回当前文件位置

	fclose(pf);
	pf = NULL;

	return 0;
}