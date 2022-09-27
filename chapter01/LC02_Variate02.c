//变量的使用
 
 
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    printf("输入两个操作数:>\n");
    scanf_s("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("sum = %d\n", sum);

    return 0;
}

//这里介绍一下输入，输出语句
// scanf
// printf