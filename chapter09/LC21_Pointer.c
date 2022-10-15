//数组指针在二维数组可以很好体现
//数组指针的使用

//参数是指针的形式
#include <stdio.h>

void print_arr2(int (*p)[5], int x, int y)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", *(*(p  + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
    print_arr2(arr, 3, 5);

    return 0;
}