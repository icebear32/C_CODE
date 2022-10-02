//单目操作符
//sizeof

#include <stdio.h>

int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算变量所占内存空间的大小
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof a);//变量可以去括号
	printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof int);//类型不能去括号，会报错

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//1

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));//4

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//40

	return 0;
}