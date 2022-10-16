//冒泡排序通用整合

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//比较两个整型值
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

//比较两个浮点型值
int cmp_float(const void* e1, const void* e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	return ((int)(*(float*)e1 - *(float*)e2));
}

//结构体类型
struct Stu
{
	char name[20];
	int age;
};

//冒泡排序结构体类型age的内容
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

//冒泡排序结构体类型name的内容
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用 ><= 来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

/*
	第一个参数:待排序数组的收元素地址第二个参数:待排序数组的元素个数
	第三个参数:待排序数组的每个元素的大小-单位是字节
	第四个参数:是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
			   函数指针的两个参数是:待比较的两个元素的地址

*/


//交换函数
/*
	交换函数注意点：
		void*类型不能加减，因为不知道传入的是什么数据类型
		强制类型转换，但是如果传入的是其他类型、浮点型、字符型，就会不符合
*/
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

// void qsort(void base,
// 	size_t num,
// 	size_t width
// 	int(*cmp)(const void* e1, const void* e2)
// );
//通用冒泡排序
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				/*
				交换函数注意点：
					void*类型不能加减，因为不知道传入的是什么数据类型
					强制类型转换，但是如果传入的是其他类型、浮点型、字符型，就会不符合
				*/
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

/*
	使用bubble_sort的程序员一定知道自己排序的是什么数据
	就应该知道如何比较待排序数组中的元素	
*/
//要排序的内容：整型值
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}

//要排序的内容：浮点型值
void test2()
{
	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	bubble_sort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
	printf("\n");
}

//要排序的内容：结构体类型age的内容
void test3()
{
	struct Stu s[3] = { {"张飞",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

//要排序的内容：结构体类型name的内容
void test4()
{
	struct Stu s[3] = { {"张飞",20},{"李四",30},{"王五",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

//main主函数调用
int main()
{

	test1();
	test2();
	test3();
	test4();
	
	return 0;
}