//字符指针


//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "abcdef"; 
//	char* pc = arr;
//	//printf("%c\n", arr);
//	//printf("%c\n", pc);
//	printf("%s \n", arr); 
//	printf("%s \n", pc);
//
//	return 0;
//}


//另一种写法
#include <stdio.h>

int main()
{
	char* p = "abcdef";//"abcdef"是一个常量字符串
	printf("%c\n",*p);//打印一个字符
	//printf("%s\n", *p);//err 必须提供的是字符串的地址，*p的是char类型，解引用首元素p地址的内容
	printf("%s\n", p);//打印整个字符串

	return 0;
}
/*
	代码char* p = "abcdef";特别容易以为是把字符串abcdef放到字符指针p 里了，
	但是本质是把字符串abcdef首字符的地址放到了p中。
*/