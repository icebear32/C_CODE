/**	悬空else
* 
* 错误代码
* 代码什么也没有显示，代码没错，只是else是属于第二个if语句的，
* 因为第一个if语句判断为假，所以没有执行第二条if语句，else也就没有执行。
* 
*/
//#include <stdio.h>
//
//int main()
//{
//	int a = 0; 
//	int b = 2; 
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n"); 
//	
//	return 0;
//}

/** 悬空else
* 适当的使用{}可以使代码的逻辑更加清楚。
* 代码风格很重要
*/
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
    {
        if (b == 2)
        {
            printf("hehe\n");
        }
    }
    else
    {
        printf("haha\n");
    }
    return 0;
}