//文件操作
//文件的顺序读写

/*
	fgets函数从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。当读取 (n-1) 个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。

	声明：char *fgets(char *str, int n, FILE *stream) 

	参数：
		str -- 这是指向一个字符数组的指针，该数组存储了要读取的字符串。
		n -- 这是要读取的最大字符数（包括最后的空字符）。通常是使用以 str 传递的数组长度。
		stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了要从中读取字符的流。
    
	返回值：
		如果成功，该函数返回相同的 str 参数。如果到达文件末尾或者没有读取到任何字符，str 的内容保持不变，并返回一个空指针。
		如果发生错误，返回一个空指针。

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	//读文件
	fgets(buf, 1024, pf);
	printf("%s", buf);//不用 \n 也可以，本身带有一个换行符
	fgets(buf, 1024, pf);
	printf("%s", buf);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}