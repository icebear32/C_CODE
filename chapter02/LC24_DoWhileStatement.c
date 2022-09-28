//do..while循环

//	do语句的语法︰
//		do
//			循环语句; 
//		while (表达式);

#include <stdio.h> 

int main()
{
	int i =1;

	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}