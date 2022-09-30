//题目名称:
//让算一个数的每位之和(递归实现)题目内容 :
//	写一个递归函数Digitsum(n)，输入一个非负整数，返回组成它的的数字之和
//  例如，调用Digitsulo(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//	输入 : 1729，输出 : 19
//Digitsum( 1729)
//Digitsum(172) +1729%10
//Digitsum(17) + 172%10 + 1729%10//DigitSum(1) + 17%10 + ...
//1 + 7 + 2 + 9
//


#include <stdio.h>

int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	unsigned int num = 0;
	scanf("%d",&num);//1729
	int ret = DigitSum(num);
	printf("ret = %d\n", ret);

	return 0;
}
