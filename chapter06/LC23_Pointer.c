//指针运算

//指针的关系运算

#include <stdio.h>
#define N_VALUES 5

int main()
{
    float values[N_VALUES];
    float* vp;
    //指针+-整数；指针的关系运算
    for (vp = &values[0]; vp > &values[N_VALUES];)
    {
        *--vp = 0;
    }

    return 0;
}

/*
	错误点：越界报错
实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行。

标准规定：
	允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许 与指向第一个元素之前的那个内存位置的指针进行比较。
*/