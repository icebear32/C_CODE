////练习二：编写函数不允许创建临时变量，求字符串的长度。
// 
//#include <stdio.h>
//
///*
//	判断 *str 是否不等于 \0，否则跳出循环，是则继续循环
//*/
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	return 0;
//}




//但是题目函数不允许创建临时变量
//改进代码，用递归的方法
#include <stdio.h>

/*
    把大事化小，判断单个字符串是否不等于‘\0’，
    不等于就进行加1和进行递归，直到遇到‘\0’，
    最后计算所有加法
    my_strlen("bit");
    1 + my_strlen("it");
    1 + 1 + my_strlen("t");
    1 + 1 + 1 + my_strlen("")
    1 + 1 + 1 + 0
    3
*/
/*
    步骤1：数组初始化的是“bit\0”

    步骤2：第一次调用my_strlen函数
    步骤3：判断单个字符是否不等于“\0”
           因为 *str="b" ，所以继续my_strlen函数

    步骤4：第二次调用my_strlen函数
    步骤5：判断单个字符是否不等于“\0”
           因为 *str="i" ，所以继续my_strlen函数

    步骤7：第三次调用my_strlen函数
    步骤8：判断单个字符是否不等于“\0”
           因为 *str="t" ，所以继续my_strlen函数

    步骤9：第四次调用my_strlen函数
    步骤10：判断单个字符是否不等于“\0”
           因为 *str="\0" ，停止if语句判断，返回0

    步骤11：返回0到第三次函数，返回0 + 1

    步骤12：返回0到第二次函数，返回0 + 1 + 1

    步骤13：返回0到第一次函数，返回0 + 1 + 1 + 1 = 3

    步骤14：打印的长度是3

*/
int my_strlen(char* str)
{
    if (*str != '\0')
        return 1 + my_strlen(str + 1);
    else
        return 0;
}

int main()
{
    char arr[] = "bit";
    //int len = strlen(arr);//求字符串长度
    //printf("%d\n", len);

    int len = my_strlen(arr);
    printf("len = %d\n", len);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址

    return 0;
}