//C语言数据类型 - 原反补码
#include <stdio.h>

int main()
{
	1 - 1;
	//加法和减法也可以统一处理( CPU只有加法器）
	//使用补码的原因
	
	//使用原码计算会错误
	//1+(-1)
	//00000000000000000000000000000001
	//10000000000000000000000000000001
	//10000000000000000000000000000010
	//相加得到了-2

	//使用补码
	//1+(-1)
	//00000000000000000000000000000001
	//11111111111111111111111111111110
	//100000000000000000000000000000000
	//00000000000000000000000000000000
	//相加得到了0

	return 0;
}