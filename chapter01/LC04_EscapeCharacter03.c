//转义字符笔试题
//程序输出的是什么？
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n", strlen("abcdef"));//输出的是6

    // \32被解析成一个转义字符 ==> ASCII代码对照表示的 /32 对应的是 space（空格）
    printf("%d\n", strlen("c:test\328\test.c"));//输出的是14     为什么是14？

    return 0;
}