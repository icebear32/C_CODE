//函数的链式访问
//把一个函数的返回值作为另外一个函数的参数。

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));//strlen函数把stract函数的返回值作为返回值进行调用
	printf("%d\n", ret);

	return 0;
}