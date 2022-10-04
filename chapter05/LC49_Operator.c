#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;//a = 6
	c = ++a;//c =6

	/*
		等于号=的优先级大于逗号，所以先计算 b = ++c , b= 7, c= 7 
		c++ =8
		++a = 7
		a++ = 8
	*/
	b = ++c, c++, ++a, a++;

	/*
		+=的优先级小于＋，
		所以a++ =9,因为是后置++，所以先赋值后加加
		所以b 加的a其实等于8
		运算之后a加加等于9
		再加c = 8
		b = b + a + c = 23
			7   8   8 
	*/
	b += a++ + c;

	printf("a = %d b = %d c = %d \n", a, b, c);

	return 0;
}