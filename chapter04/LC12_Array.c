#include <stdio.h>

int main()
{

	int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	
	printf ("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	
	//printf("%d\n", *arr);//1

	return 0;
}