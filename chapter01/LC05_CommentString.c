//注释
//1. 代码中有不需要的代码可以直接删除，也可以注释掉
//2. 代码中有些代码比较难懂，可以加一下注释文字
//注释有两种风格：
//C语言风格的注释 /*xxxxxx*/
//缺陷：不能嵌套注释
//
//C++风格的注释 //xxxxxxxx
//可以注释一行也可以注释多行

#include <stdio.h>

int Add(int x, int y)
{
    return x + y;
}

/*C语言风格注释
int Sub(int x, int y)
{
    return x-y;
}
*/

int main()
{
    //C++注释风格
    //int a = 10;
    //调用Add函数，完成加法
    printf("%d\n", Add(1, 2));
    return 0;
}