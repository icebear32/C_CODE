//枚举

//枚举的定义
//	以下定义的 enum Day ， enum Sex ， enum Color 都是枚举类型。 
//	{}中的内容是枚举类型的可能取值，也叫 枚举常量 。
//	这些可能取值都是有值的，默认从0开始，一次递增1，当然在定义的时候也可以赋初值。


#include <stdio.h>

enum Day//星期
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Sex//性别
{
	//枚举的可能取值 - 常量
	MALE,//0
	FEMALE,//1
	SECRET//2
};

enum Color//颜色
{
	//在定义的时候也可以赋初值
	RED = 1,//0
	GREEN = 3,//3
	BLUE = 5 //5
};

int main()
{
	printf("没有赋初值：%d %d %d\n", MALE, FEMALE, SECRET);//0 1 2

	printf("赋初值：%d %d %d\n", RED, GREEN, BLUE);//0 3 5
	
	return 0;
}