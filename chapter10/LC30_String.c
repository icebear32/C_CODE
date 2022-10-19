//  strstr 函数 - 查找字符串

//  char * strstr ( const char *, const char * );

// 模拟实现 strstr函数
// 再次优化代码
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);

	char* s1 = (char*)p1;
	char* s2 = (char*)p2;
	char* cur = (char*)p1;//记录匹配到的所在位置
	if (*p2 == '\0')//判断p2的地址是否只存在“\0”
	{
		return (char*)p1;//若p2是“\0”则返回p1的地址
	}
	
	/*
	* 步骤1：判断cur是否为\0，不为0执行循环
	* 步骤2：cur的位置地址赋值给s1，是开始匹配的地址
	* 步骤3：p2的字符地址赋值给s2，是匹配的对象
	* 步骤4：第二个while循环，判断s1、s2是否匹配到\0,为\0就不执行while循环
	*		 而且s1地址的字符要和s2地址的字符匹配相同，不然也不执行while循环
	* 步骤5：s1、s2的地址加加，跳到下一个地址
	* 步骤6：if语句判断*s2为\0的话，则p2的已经到\0,查找函数应结束，返回cur的地址
	* 步骤7：cur加加，跳到下一个地址，记录
	* 步骤8：找不到相同匹配的字符串，返回NULL空指针
	* 
	* 修改后的my_strstr函数可以在第一次匹配不成功，可以回到开始匹配的位置
	* p1p2的地址固定不变，改变的是s1、s2，
	* 用cur记录匹配不成功然后到下一个字符地址的位置
	* 因此不用考虑因为无法返回原来查找的位置
	*/
	while (*cur)//当cur的不为\0执行下面循环
	{
		s1 = cur;//cur的位置地址赋值给s1，是开始匹配的地址
		s2 = (char*)p2;//p2的字符地址赋值给s2

		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;/* 优化修改点 */
		}
		if (*s1 == '\0')//修改，若s1提前到\0就提前结束程序
		{
			return NULL;
		}
		cur++;//找到字串
	}
	return NULL;//找不到字串
}

int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";

	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("字串不存在");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}