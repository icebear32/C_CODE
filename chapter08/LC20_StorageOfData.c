//练习题

//下面代码的结果是（ D )
//题目内容:
//A.1000
//B.999
//C.255
//D.256

#include <stdio.h>
#include <string.h>

int main()
{
	//-128 --> 127
	char a[1000] = { 0 };
	//
	int i = 0;
	for ( i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1 -2 ... -128 127 126 125 ... 2 1 0 -1 -2 ... 

	printf("%d\n", strlen(a));//255

	return 0;
}