//C语言数据类型
//大小端

#include <stdio.h>

int main()
{
	int a = 20;
	//00000000000000000000000000010100
	//0x00 00 00 14

	/*
		假设一个地址: Ox 11 22 33 44
		假设有四种存储方式： 11 22 33 44 - 44 33 22 11 - 11 44 33 22 - 22 11 33 44
		但是为了放入取出方便，一般会用 11 22 33 44 - 44 33 22 11 这两个方式

		11 22 33 44因为是数据的低位放在内存的高位，11是数据的高位放在内存的低位所以是大端存储
		
		44 33 22 11因为是数据的低位放在内存的低位，11是数据的高位放在内存的高位所以是小端存储
	*/

	return 0;
}