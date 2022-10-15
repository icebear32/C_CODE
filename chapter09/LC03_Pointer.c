//字符指针

//常量字符串的错误写法
//#include <stdio.h>
//
////编译没报错，运行报错
//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	*p = 'w';
//	printf("%s\n", p);
//
//	return 0;
//}

//改正
#include <stdio.h>

int main()
{
	//加个const 把 *p 变成常量，不可以改变值(可加可不加，隐性加了)
	const char* p = "abcdef";//"abcdef"是一个常量字符串
	//*p = 'w';//错误

	printf("%s\n", p);

	return 0;
}

// www.stackoverflow. com
// Segmentation fault - 段错误
// segmentfault.com