// &数组名 VS 数组名

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);

	return 0;
}
//得出：数组名和&数组名打印的地址是一样的。