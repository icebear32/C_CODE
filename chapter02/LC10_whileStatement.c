/*while语句中的continue
* 
* 总结: 
*	continue在while循环中的作用就是：
*		continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
*		而是直接跳转到while语句的判断部分。
*		进行下一次循环的入口判断。
*/




////continue死循环了
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//改正
#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 10)
	{
		i = i + 1;
		if (i == 5)//判断为5成立，跳出该次循环
			continue;
		printf("%d ", i);
	}
	return 0;
}