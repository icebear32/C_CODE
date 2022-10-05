//野指针

//1.指针未初始化
#include <stdio.h>

int main()
{
	//指针未初始化
	int* p;//局部变量指针未初始化，默认为随机值
	*p = 20;

	return 0;
}