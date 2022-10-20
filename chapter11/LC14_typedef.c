//	位段

#include <stdio.h>

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	//int d : 33;//error：超出int类型的4个字节大小
	/*
		E0105	位域的大小无效
		C2034	“d”: 位域类型对位数太小

	*/
	
};

int main()
{
	struct S s;

	printf("%d\n", sizeof(s));

	return 0;
}