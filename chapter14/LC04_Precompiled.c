#include <stdio.h>

//#define SQUARE(X) X*X
//#define SQUARE(x) (x) * (x)
//#define DOUBLE(X) X + X
#define DOUBLE(X) (X + X)

int main()
{
	/**
	* 这个宏接收一个参数 x . 如果在上述声明之后，
	* 放置于程序中，预处理器就会用表达式（5 * 5）替换上面的表达式 SQUARE(5)
	*/
	//int ret = SQUARE(5);
	////int ret = 5 * 5;
	//printf("ret = %d\n", ret);//25

	//int ret = SQUARE(5 + 1);
	//printf("ret = %d\n", ret);//11

	//int ret = SQUARE(5 + 1);
	//printf("ret = %d\n", ret);//36

	//int a = 5;
	//int ret = 10 * DOUBLE(a);
	//printf("ret = %d\n", ret);//55
	////运行结果是 55 而不是 15
	////int ret = 10 * 5 + 5 = 55

	int a = 5;
	int ret = 10 * DOUBLE(a);
	printf("ret = %d\n", ret);//15
	//int ret = 10 * (5 + 5);

	return 0;
}