//文件操作
//文件的随机读写

//fseek函数

/*
	int fseek ( FILE * stream, long int offset, int origin );
	            文件指针       偏移量           文件当前位置 
	
	fseek - 根据文件指针的位置和偏移量来定位文件指针。

*/

#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{	
		return 0;
	}
	/*
		SEEK_SET	文件的开头
		SEEK_CUR	文件指针的当前位置
		SEEK_END	文件的末尾
	*/
	//1.定位文件指针
	//fseek(pf, 2, SEEK_CUR);//c
	//fseek(pf, -2, SEEK_END);//e
	fseek(pf, 2, SEEK_SET);//c

	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);//打印定位到的字节

	fclose(pf);
	pf = NULL;

	return 0;
}