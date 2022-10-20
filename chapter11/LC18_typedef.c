//联合体

//联合也是一种特殊的自定义类型 这种类型定义的变量也包含一系列的成员，
//特征是这些成员公用同一块空间（所以联合也叫共用体）。

#include <stdio.h>

//联合类型的声明
union Un
{
	char c;
	int i;
};

int main()
{
	//联合变量的定义
	union Un un;

	//计算连个变量的大小
	printf("%d\n", sizeof(un));//4 
	//成员公用同一块空间

	return 0;
}