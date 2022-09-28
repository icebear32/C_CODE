/*	while语句中的break
* 
* 总结： 
*	break在while循环中的作用：
*	其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。 
*	所以：while中的break是用于永久终止循环的。
*/
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)//当i为5的时候终止循环
			break;
		printf("%d ", i);//1 2 3 4
		i = i + 1;
	}

	return 0;
}