//一维数组的初始化

#include <stdio.h>
#include <string.h>

int main()
{
	char arr4[] = "abcdef";

	//问题：下面的代码打印出来的是什么？
	printf("%d\n", sizeof(arr4));
	//sizeoft算arr4所占空间的大小
	//7个元素 - char 7 * 1 = 7
	
	printf("%d\n", strlen(arr4));
	//strlen求字符减的长度 - '\O’之前的字符个数
	//[a b c d e f /0]
	//6
	
	// 1. strlen和 sizeof没有仕么关联
	// 2. strlen是求字符串长度的 - 只能针对字符串求长度–库函数-使用得引头文件
	// 3. sizeof计算变量，数组、类型的大小-单位是字节―操作符

	return 0;
}
