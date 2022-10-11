//指针和数组

#include <stdio.h>

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    //int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
    int* p = arr;//p存放的是数组首元素的地址
    printf("%p\n", p);
    printf("%p\n", &p[0]);

    /*
        可见数组名和数组首元素的地址是一样的。
        结论︰数组名表示的是数组首元素的地址。     
    */

    return 0;
}