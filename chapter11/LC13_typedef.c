//位段

//什么是位段
//位段的声明和结构是类似的，有两个不同：
//	1.位段的成员必须是 int、unsigned int 或signed int 。
//	2.位段的成员名后边有一个冒号和一个数字


#include <stdio.h>

//
//	位段 - 二进制位
//

struct S	//S就是一个位段类型
{
	
	int a : 2;//a 是2个 bite 的内存
	
	int b : 5;//b 是5个 bite 的内存
	
	int c : 10;//c 是10个 bite 的内存
	
	int d: 30;//d 是30个 bite 的内存
	
};

int main()
{
	struct S s;

	printf("%d\n", sizeof(s));//8个字节
	/*
		int 是4个字节
		首先开辟 4 个字节 32个bite的内存空间
		a 占用2个 bite 的内存
		b 占用5个 bite 的内存
		c 占用10个 bite 的内存
		还剩15个bite内存空间
		因为15的bite的内存空间不够存放 d 的内存空间，丢弃15bite的内存空间
		所以开辟新的 4 个字节 32个bite的空间来存放 d 的30bite空间
		所以总共开辟了8个字节的内存空间
	*/

	return 0;
}