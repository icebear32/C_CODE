#include <stdio.h>
int main()
{
    int ch = 0;

    while ((ch = getchar()) != EOF)//遇到EOF停止循环
    {
        if (ch < '0' || ch > '9')//遇到不是数字的字符就跳出这次循环，回到while判断语句，继续循环
            continue;
        putchar(ch);//遇到数字字符就打印输出
    }
    return 0;
}