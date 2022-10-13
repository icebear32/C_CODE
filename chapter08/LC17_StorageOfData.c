//浮点数类型
//浮点数存储的例子
#include <stdio.h>

int main()
{
	int n = 9;
    // 9 00000000 00000000 00000000 00001001 - 补码（整数原反补相同）
	float* pFloat = (float*)&n;
    //float 0 00000000 00000000000000000001001
    //S = 0
    //M = 0.00000000000000000001001
    //E 为全0， 有效数字 M 不再加上第一位的 1，E = 1 - 127 = -126
    //(-1)^0 * 0.00000000000000000001001 * 2^-126
    //无限于接近 0
	
	printf("n的值为:%d\n", n);//以整型形式打印出9
    
	printf("*pFloat的值为:%f\n", *pFloat);//以浮点型形式打印出 0.000000

	*pFloat = 9.0;
    //二进制 1001.0
    //科学计算法 (-1)^0 * 1001.0 * 2^3
    //得到 0 10000010 00100000000000000000000
	
	printf("num的值为:%d\n", n);
    //以整型形式打印，二进制：01000001 00010000 00000000 00000000 ，
    //打印出 十进制：1091567616
	
	printf("*pFloat的值为:%f\n", *pFloat);//以浮点型形式打印出 9.000000

	return 0;
}