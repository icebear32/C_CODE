//指针运算

//指针的关系运算

#include <stdio.h>

#define N_VALUES 5

int main()
{
    float values[N_VALUES];
    float* vp;
    //指针+-整数；指针的关系运算
    for (vp = &values[0]; vp > &values[N_VALUES];vp--)
    {
        *vp = 0;
    }

    return 0;
}