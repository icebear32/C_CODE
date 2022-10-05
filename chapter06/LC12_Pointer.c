//野指针

#include <stdio.h>

int* test()
{
    int a = 10;
    return &a;
}

int main()
{
	//指针指向的空间释放
    int* p = test();//到这
    printf("%d\n", *p);

	return 0;
}
/*
    1、调用函数
    2、test函数产生地址&a，传给main函数，但是a是局部变量，传出后函数结束，&a (指针地址)被销毁还给内存，给main函数的地址不知道给了那个随机地址变量
    3、打印指针变量p，p装的是test函数传来的地址，不知道是那个地址的值

*/