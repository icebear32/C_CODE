//strcmp函数
//
//int strcmp(const char* str1, const char* str2, size_t num);
//
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* p1 = "opqrst";
//	char* p2 = "abcd";
//
//	/*
//		错误示范
//		比较的不是字符串内容，而是字符串的首字符的地址
//	*/
//	if ("opqrst" >= "abcd")
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

int main()
{
	char* p1 = "opqrst";
	char* p2 = "abcd";

	int ret = strcmp(p1, p2);
	printf("%d\n", ret);

	return 0;
}