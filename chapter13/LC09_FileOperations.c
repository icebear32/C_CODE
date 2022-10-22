//文件操作
//文件的顺序读写

#include <stdio.h>
#include <string.h>

struct S
{	
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14f,"hello" };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}

	//格式化的形式写文件
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}