//嵌套结构体

#include <stdio.h>

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello World\n";
	struct T t = { "hehe",{100,'w',"hello ygh",3.14},arr };//结构体嵌套初始化
	printf("%s \n", t.ch); //hehe
	printf("%s\n", t.s.arr); //hello world
	printf("%1f\n", t.s.d);//3.14
	printf("%s \n", t.pc);//hello bit

	return 0;
}