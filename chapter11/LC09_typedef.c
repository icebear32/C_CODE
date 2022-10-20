// 修改默认对齐数
// #pragma 这个预处理指令，可以改变我们的默认对齐数

#include <stdio.h>

#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;//1
    //3
	int i;//4
	char c2;//1
    //1 + 3 + 4 + 1 = 9
    //结构体对齐数最大是4，9不是4的倍数
    //所以 扩展内存到 12
};
#pragma pack()//取消设置的默认对齐数，还原为默认

#pragma pack(1)//设置默认对齐数为8
struct S2
{
    char c1;//1
    int i;//4
    char c2;//1
    //不用扩展内存
};
#pragma pack()//取消设置的默认对齐数，还原为默认

int main()
{
    //输出的结果是什么？
    printf("%d\n", sizeof(struct S1));//12
    printf("%d\n", sizeof(struct S2));//6
    return 0;
}

/*
	结论：
		结构在对齐方式不合适的时候，我么可以自己更改默认对齐数
*/