//练习
#include <stdio.h>

int main()
{
    int n = 1,m = 2;//开始：n =1,m =2
    switch (n)//因为 n=1 所以执行case 1
    {
    case 1:
        m++;
    case 2:
        n++;
    /*
        因为case 1没有加break，执行完case 1继续执行case 2
        所以m++ ==> 3 n++ ==>2
    */
    case 3://因为case 2也没有加break，继续执行
        switch (n)
        {//switch允许嵌套使用
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break;
        }
        /*
            继续执行switch语句
            因为n = 2,所以执行case 2语句项m++ ==> 4 n++==>3
            break退出
            又因为case 3没有加break，继续执行case 4
        */
    case 4://执行case 4m++==> 5 遇到 break 退出
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);//打印m= 5, n = 3
    return 0;
}