//文件操作
//文件的随机读写

//rewind函数

/*
	ftell() 函数的声明：void rewind(FILE *stream);

	rewind函数的描述：
		> 设置文件位置为给定流 stream 的文件的开头
		>让文件指针的位置回到文件的起始位置

	rewind函数的参数:stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流

	rewind 函数的返回值:该函数不返回任何值

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

	//3.回到文件的起始位置
	rewind(pf);

	char ch = fgetc(pf);
	printf("%c\n", ch);//a 回到文件的起始位置“a”

	fclose(pf);
	pf = NULL;

	return 0;
}