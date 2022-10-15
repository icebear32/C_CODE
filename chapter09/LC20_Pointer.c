//数组指针在二维数组可以很好体现
//数组指针的使用

//参数是数组的形式
#include <stdio.h>

void print_arr1(int arr[3][5], int x, int y)//将二维数组arr 传入 print1 函数，然后把二维数组存放在数组指针当中
{
    int i = 0;
    int j = 0;
    /*
        每次循环打印一行，
        二维数组的一个元素打印出来二维数组的一个元素就是一个一维数组
    */
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
    print_arr1(arr, 3, 5);

    return 0;
}