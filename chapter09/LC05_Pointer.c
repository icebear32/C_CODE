//字符指针面试题

#include <stdio.h>

/*
	判断的是常量字符串的地址
	两个都是一样的常量字符串
	所以指向的地址相同
*/

int main()
{
    char* str3 = "hello world";
    char* str4 = "hello world";

    if (str3 == str4)
        printf("hehe\n");
    else
        printf("haha\n");

    return 0;
}


/*
    这里str3和str4指向的是一个同一个常量字符串。
    C/C++会把常量字符串存储到单独的一个内存区域，当几个指针。
    指向同一个字符串的时候，他们实际会指向同一块内存。
    但是用相同的常量字符串去初始化不同的数组的时候就会开辟出不同的内存块。
    所以str1和str2不同，str3和str4不同。
*/