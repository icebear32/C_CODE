//字符指针面试题

#include <stdio.h>

/*
    打印的是haha
    因为判断的是数组的首元素地址
    arr1和arr2是不同的数组地址
*/
int main()
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    
    if (str1 == str2)
        printf("hehe\n");
    else
        printf("haha\n");

    return 0;
}