#include <stdio.h>
#include <stddef.h>

struct S
{
	char c1;
	int a;
	char c2;
};

//定义宏实现参数的偏移量
/**
 *	(struct_name*)0 将 0 转换成 struct_name 类型，是一个地址。
 *	(struct_name*)0)->member_name 将地址指向找到 member_name 成员
 *	&(((struct_name*)0)->member_name 取偏移量的地址
 *	(int)&(((struct_name*)0)->member_name 偏移量因为是一个整型，所以强制类型转换为 int 类型
 */ 
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	//struct S s;

	//printf("%d\n", offsetof(struct S, c1));//0
	//printf("%d\n", offsetof(struct S, a));//4
	//printf("%d\n", offsetof(struct S, c2));//8

	/**
	 *	将 0 转换成（struct S）类型
	 *	找到 c1 成员
	 *	取 c1 偏移量的地址
	 *	因为偏移量是一个整型，转换成 int 类型
	 */
	printf("%d\n", OFFSETOF(struct S, c1));//0
	//同理操作
	printf("%d\n", OFFSETOF(struct S, a));//4
	//同理操作
	printf("%d\n", OFFSETOF(struct S, c2));//8

	return 0;
}