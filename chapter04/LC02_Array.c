//一维数组的初始化

#include <stdio.h>

int main()
{
	//创建一个数组 - 存放整型 - 10个
	int arr[10] = {1, 2, 3};//不完全初始化,剩下的元素默认初始化为0
	
	char arr2[5] = { 'a','b' };
	//char arr2[5] = { 'a',98 };

	char arr3[5] = "ab";//ok

	//int n = 5;
	//char ch = [n];//err
	
	char arr4[] = "abcdef";//[]不用写也可以

	return 0;
}
