//指针运算

//指针+-整数

//指针+-整数是跳过一个地址

#include <stdio.h>

#define N_VALUES 5
float values[N_VALUES];
float* vp;

int main()
{
	//指针+-整数；指针的关系运算
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 1;//数组里每个元素的地址都赋值为1
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%f\n", values[i]);//遍历打印数组
	}

	return 0;
}