//文件操作
//文件结束的判定

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}

	//读文件
	int ch;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}

	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}