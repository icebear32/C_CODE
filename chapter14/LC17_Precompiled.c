/*开辟不同类型的空间*/
#include <stdio.h>

#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));

	int* p = MALLOC(10, int);
	//int* p = (int*)malloc(10 * sizeof(int));

	return 0;
}