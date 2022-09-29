//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整型
//long long   //更长的整形
//float       //单精度浮点数
//double      //双精度浮点数
//
//为什么出现这么多的类型？
//    数据类型解决了“存”的问题：它决定了使用这个类型需要开辟空间的大小以及内存中的数据是如何存储的；
//    数据类型解决了“取（读）”的问题：它改变了看待内存空间的视角，比如在内存中同样的两块4个字节的空间，
//	  存放着同样的二进制码，如果这两块内存对应的两个变量类型不一样，那么它们的意义也就不一样了。
//
//c语言为什么要分不同的类型
//     通过定义变量的类型来规定变量的内存空间大小，通过阶梯式的定义，既有满足小数值运行的byte类型，也有支持大数值运算的long类型。
//     这样不仅满足运算的最大支持（long），同时也能节省系统内存资源（byte）。


#include <stdio.h>
int main()
{
    //以下打印每个数据类型所占的字节
    printf("%d\n", sizeof(char));//1
    printf("%d\n", sizeof(short));//2
    printf("%d\n", sizeof(int));//4
    printf("%d\n", sizeof(long));//4
    printf("%d\n", sizeof(long long));//8
    printf("%d\n", sizeof(float));//4
    printf("%d\n", sizeof(double));//8
    printf("%d\n", sizeof(long double));//8

    //类型的使用：
    char ch = 'w';
    double dou = 20.00;
    int intt = 22;

    return 0;
}

// 注意：存在这么多的类型，其实是为了更加丰富的表达生活中的各种值。
