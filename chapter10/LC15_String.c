//strcmp函数
//
//int strcmp(const char* str1, const char* str2, size_t num);
//
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完

// strcmp函数返回值
//	>0	
//	== 0
//	<0
#include <stdio.h>
#include <string.h>

int main()
{
	char* p1 = "qbc";
	char* p2 = "abc";

	if (strcmp(p1,p2) > 0)
	{
		printf("p1 > p2\n");
	}
	else if (strcmp(p1, p2) == 0)
	{
		printf("p1 == p2\n");
	}
	else if (strcmp(p1, p2) < 0)	//不一样的软件可能会返回不一样的数，写 <0 更好
	{
		printf("p1 < p2\n");
	}

	return 0;
}