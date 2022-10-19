//memcpy 函数
// 
//void * memcpy ( void * destination, const void * source, size_t num ); 

/*
	函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
	这个函数在遇到 '\0' 的时候并不会停下来。
	如果source和destination有任何的重叠，复制的结果都是未定义的。
*/

//memcpy 函数对整型体数组操作
 
#include <stdio.h>
#include <string.h>

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };

	memcpy(arr2, arr1, 5*sizeof(arr1));

	return 0;
}