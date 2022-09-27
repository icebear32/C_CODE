/*
    变量和常量
	生活中的有些值是不变的(比如︰圆周率，性别( ? )，身份证号码，血型等等)，有些值是可变的(比如∶年龄，体重，薪资)。
	不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。
*/

#include <stdio.h>

 int global = 2019;//全局变量

 int main()
 {
     int age = 150;
     float weight = 45.5f;
     char ch = 'w';

     // 变量的分类
     //     局部变量
     //     全局变量

      int local = 2018;//局部变量
     //下面定义的global会不会有问题？
     int global = 2020;//局部变量
     printf("global = %d\n", global);

     return 0;
 }


//总结：
//    上面的局部变量global变量的定义没错
//    当局部变量和全局变量同名的时候，局部变量优先使用