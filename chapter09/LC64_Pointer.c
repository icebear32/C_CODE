//指针笔试题


//7
#include <stdio.h>

int main()
{
	char* a[] = { "work","at","alibaba" };
	//char* a[] 是字符指针数组，存放的是 "work","at","alibaba" 的首元素地址 "w" "a" "a"
	//a表示首元素地址

	char** pa = a;
	//二级指针存放一级指针
	//a数组的首元素地址赋值给pa

	pa++;
	//表示跳过一个数组的地址
	//所以是指向“at”的字符数组的首元素地址

	printf("%s\n", *pa);//解引用pa，得到“at”

	return 0;
}