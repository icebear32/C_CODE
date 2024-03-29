//结构体内存对齐

#include <stdio.h>

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	/*
		c1，因为第一个成员在与结构体变量偏移量为0的地址处。
		所以结构体c1成员在0的地址的地址，且占一个字节

		a,其他成员变量要对齐到某个数字（对齐数)的整数倍的地址处。
		VS编译器默认的8对齐数和该成员的4字节，得到的对齐数是4。
		所以a成员要存放在4的倍数的地址，所以放在图中4的地址

		c2，其他成员变量要对齐到某个数字（对齐数)的整数倍的地址处。对齐数是1
		所以c2成员要存放在1的倍数的地址，所以放在a 的地址

		结构体总大小为最大对齐数(每个成员变量都有一个对齐数）的整数倍。
		因为最大的对齐数是4所以结构体总大小是4的倍数，
		所以本来总的是9个字节扩展到12个字节

	*/

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	/*
		c1，因为第一个成员在与结构体变量偏移量为0的地址处。
		所以结构体c1成员在0的地址的地址，且占一个字节

		c2，其他成员变量要对齐到某个数字（对齐数)的整数倍的地址处。
		该成员的对齐数是1，放在1的倍数处，所以放在c1后，占一个字节

		a，该成员的对齐数是4，所以放在4的倍数处，因为c1、c2占了两个字节，
		所以跳到 4 处的地址，占四个字节

		结构体总大小为最大对齐数(每个成员变量都有一个对齐数）的整数倍。
		因为最大的对齐数是4所以结构体总大小是4的倍数，
		所以本来总的是8个字节，没有超过4个倍数，不用扩展内存
	*/

	return 0;
}