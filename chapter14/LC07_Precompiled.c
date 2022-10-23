//#include <stdio.h>
//
//void print(int a)
//{
//	printf("the value of a is %d\n", a);//字符串参数被写死
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//printf("the value of a is %d\n", a);//正常输出
//
//	print(a);
//	print(b);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	/*在这种情况，字符串拼在一起被当成一个字符串*/
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel" "lo " "world\n");
//
//	return 0;
//}


//使用 # ，把一个宏参数变成对应的字符串
#include <stdio.h>

//#define PRINT(X) printf("the value of X is %d\n", X);
#define PRINT(X) printf("the value of " #X " is %d\n", X);

int main()
{
	int a = 10;
	int b = 20;

	PRINT(a);
	//代码中的 #X(a) 会预处理器处理为：
	//"X(a)".最终的输出的结果应该是
	//printf("the value of" "a" " is %d\n",a);
	PRINT(b);
	//printf("the value of" "b" " is %d\n", b);

	return 0;
}