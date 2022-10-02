//赋值操作符
//复合赋值符

#include <stdio.h>

int main()
{
	//赋值操作符

	int weight = 120;//体重
	weight = 89;//不满意就赋值
	double salary = 10000.0;
	salary = 20000.0;//使用赋值操作符赋值

	//赋值操作符可以连续使用，比如：
	int a = 10;
	int x = 0;
	int y = 20;
	a = x = y + 1;//连续赋值（不好看）

	//复合赋值符
	int x = 10;
	int a = 10;

	x = x + 10;
	x += 10;//复合赋值

	return 0;
}
