//字符串
//
//"hello Character String\n"
//这种由双引号(Double Quote )引起来的一串字符称为字符串字面值(String Literal )，或者简称字符串。
//
//注︰字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容。

#include <stdio.h>

//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
int main()
{
    char arr1[] = "bit";
    char arr2[] = {'b', 'i', 't'};
    char arr3[] = {'b', 'i', 't', '\0'};//注︰字符串的结束标志是一个\0的转义字符。
                                        //在计算字符串长度的时候\0是结束标志，不算作字符串内容。
    printf("%s\n", arr1);//bit
    printf("%s\n", arr2);//有乱码 - 因为没有设置到“\0”结束符
    printf("%s\n", arr3);//bit

    return 0;
}