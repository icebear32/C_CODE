//	输入1，输出星期一
//	输入2，输出星期二
//	输入3，输出星期三
//	输入4，输出星期四
//	输入5，输出星期五
//	输入6，输出星期六
//	输入7，输出星期七

//switch (整型表达式)
//{
//	语句项；
//}
//
//语句项：
//case 整型常量表达式
//	语句;


#include <stdio.h>
int main()
{
    int day = 3;
    switch (day)
    {
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期天\n");
        break;
    default :
        printf("输入错误");
        break;
    }
    return 0;
}