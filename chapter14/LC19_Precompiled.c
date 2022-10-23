/*条件编译*/

#include <stdio.h> 

#define __DEBUG__ 

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__ 
		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。 
#endif //__DEBUG__ 
	}

	return 0;
}