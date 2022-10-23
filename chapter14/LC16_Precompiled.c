/*宏的参数可以出现类型，但是函数做不到*/
#include <stdio.h>

#define SIZEOF(type) sizeof(type)

int main()
{
	int ret = SIZEOF(int);
	//int ret = sizeof(int);
	printf("%d\n", ret);

	return 0;
}