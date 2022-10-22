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
	struct S s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	//格式化的输入数据
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %f %s", s.n, s.score, s.arr);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}