/*
    n = 2

    步骤1：第一次调用Fun函数
    步骤2：判断n是否等于5，不等于，执行else语句
    步骤3：对n进行加1操作（n=3）

    步骤4：第二次调用Fun函数
    步骤5：判断n是否等于5，不等于，执行else语句
    步骤6：对n进行加1操作（n=4）

    步骤7：第三次调用Fun函数
    步骤8：判断n是否等于5，不等于，执行else语句
    步骤9：对n进行加1操作（n=5）

    步骤10：第四次调用Fun函数
    步骤11：判断n是否等于5，等于，返回2

    步骤12：回到第三次调用的Fun函数
    步骤13：接收第四次调用返回的2，进行运算 2 * 2 =  4

    步骤14：回到第二次调用的Fun函数
    步骤15：接收第三次调用返回的4，进行运算 2 * 4 = 8

    步骤16：回到第一次调用的Fun函数
    步骤17：接收第二次调用返回的8，进行运算 2 * 8 = 16

    步骤18：打印输出ret结果

    程序结束

*/
#include <stdio.h>

int Fun(int n)
{
    if (n == 5)
    {
        return 2;
    }
    else
    {
        return 2 * Fun(n + 1);
    }
}

int main()
{
    int ret = Fun(2);
    printf("%d\n", ret);

    return 0;
}
