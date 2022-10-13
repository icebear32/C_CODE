//浮点数类型
//浮点数存储的例子
#include <stdio.h>

int main()
{
	int n = 9;//整型类型
	float* pFloat = (float*)&n;
	
	printf("n的值为:%d\n", n);//9
	//以整型定义，以整型打印肯定是整型

	printf("*pFloat的值为:%f\n", *pFloat);//分析的应该是打印 9.000000 - 结果打印 0.000000
	//以整型的形式存储，用浮点型的方法打印出现其他值
	//得出整型数据的存储和浮点数数据的存储的方式不一样,那应该是什么样的？

	*pFloat = 9.0;
	
	printf("num的值为:%d\n", n);//分析的应该是打印 9 - 结果打印1091567616
	//以浮点型的形式存储，用整型的方法打印出现其他值
	//得出整型数据的存储和浮点数数据的存储的方式不一样,那应该是什么样的？
	
	printf("*pFloat的值为:%f\n", *pFloat);//9.000000
	//以 float* 定义，以 float* 打印肯定是 float*指向的 9.000000

	return 0;
}

/**
* 
* 9.0
* 二进制：1001.0
* 
* 根据国际标准IEEE（电气和电子工程协会）754，
* 任意一个二进制浮点数V可以表示成下面的形式：
* (-1)^S * M * 2^E 
*	(-1)^s		表示符号位，当 s = 0，V为正数；当s=1，V为负数。
*	M			表示有效数字，大于等于1，小于2。 
*	2^E			表示指数位。
* 
* 1001.0 二进制写成二进制浮点数 (-1)^0 * 1.0001 * 2^3
*								(-1)^S * M      * 2^E 
* 
* 十进制的 9.0 ，写成二进制是 1001.0 ，
* 相当于 1.001 * 2^3 。那么，s = 0 ，M = 1.001 ，E = 3
* 
*/


/**
* 
* 0.5 写成科学计数法形式
* 0.5 的二进制 的 0.1 （ 1 的意思是 2 的 -1 次方 是 1/2，是 0.5）
* 二进制 转 科学计数法形式 (-1)^0 * 1.0 * 2^-1
* 因为 2^-1 ，所以 E 有可能是负数
* 但是规定 E 是无符号数，
* 所以存入内存时 E 的真实值必须再加上一个中间数，
* 
* S = 0
* M =  0.1
* E = -1	E = E + 127 => E = 126
* 
* 正数也要加 127，double双精度浮点型也加 127
* 
*/