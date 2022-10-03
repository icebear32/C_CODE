//逻辑操作符

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 20;
    //int c;

    if (a && b)//逻辑与 a 与 b 不为 0，为真
    {
        printf("Line 1 - 条件为真\n");//执行
    }

    if (a || b)//逻辑或  a 与 b 任意一个非零，则条件为真
    {
        printf("Line 2 - 条件为真\n");//执行
    }

    if (!(a && b))//条件为真则逻辑非运算符将使其为假
    {
        printf("Line 3 - 条件为真\n");
    }
    else
    {
        printf("Line 3 - 条件为假\n");//执行
    }

    return 0;
}