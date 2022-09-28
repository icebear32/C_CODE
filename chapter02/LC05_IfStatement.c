/*	运算符不正确
* 
* 在 Boolean 上下文中执行了常量赋值。应考虑改用“ == ”
* 
*/
#include <stdio.h>

int main()
{
	int num = 4;
	if (5 == num)
	{
		printf("hehe\n");
	}
	//if (num = 5)
	//{
	//	//= 赋值  == 判断相等
	//	printf("hehe\n");//运算符不正确 : 在 Boolean 上下文中执行了常量赋值。应考虑改用“ == ”

	//}

	return 0;
}