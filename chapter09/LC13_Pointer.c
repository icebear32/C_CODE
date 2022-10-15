// &数组名 VS 数组名

#include <stdio.h>

int main()
{ 
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr= %p\n", &arr);
	printf("arr+1 = %p\n", arr + 1);//跳过一个数组元素地址
	printf("&arr+1= %p\n", &arr + 1);//跳过一个数组地址

	return 0;
}
/*
	根据上面的代码我们发现，其实 &arr 和 arr ，虽然值是一样的，但是意义应该不一样的。
	实际上： &arr 表示的是数组的地址，而不是数组首元素的地址。
	（细细体会一下） 数组的地址+1，跳过整个数组的大小，
	所以 &arr+1 相对于 &arr 的差值是40.
*/