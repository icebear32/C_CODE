//结构//初始化

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[8];
}Stu;//声明类型的同时定义变量Stu

int main()
{
	Stu s1 = { "张三",20,"20201227","男" }; //初始化:定义变量的同时赋初值

	struct Stu s2 = { "茄子",30,"19191919","保密" };//初始化:定义变量的同时赋初值

	struct Stu s3; //定义结构体变量s3

	return 0;
}