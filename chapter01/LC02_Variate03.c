//    常量
//        C语言中的常量和变量的定义的形式有所差异。C语言中的常量分为以下以下几种︰
//        ·字面常量
//        const修饰的常变量
//        #define定义的标识符常量
//        ·枚举常量

#include <stdio.h>
//举例
enum Sex
{
 MALE,
 FEMALE,
 SECRET
};
//括号中的MALE,FEMALE,SECRET是枚举常量
int main()
{
    3.14;//字面常量
    1000;//字面常量
    const float pai = 3.14f;   //const 修饰的常量

    //pi = 5.14;//ok?
    // 运行错误 ： 在声明常量的同时给变量赋值，不要重新赋值变量

    printf("pai = %f\n",pai);

    #define MAX 100            //#define的标识符常量

    return 0;
}