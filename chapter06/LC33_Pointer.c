//练习题

//下列程序段的输出结果为（ C )
//题目内容:
//	A. 9, 12
//	B. 6, 9
//	c. 6, 12
//	D. 6, 10


#include <stdio.h>

int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;

	pulPtr = pulArray;
	*(pulPtr + 3) += 3;//12 -->因为 pulPtr+3 是数组第一个元素跳过三个元素，
					   // *（pulPtr+3）得到9，再将9+3=12
					   //所以 *(pulPtr + 3)等于12

	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
	//6	12

	return 0;
}