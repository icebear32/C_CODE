//枚举

//枚举的初始赋值错误
//只能在枚举体里面进行赋值操作，在枚举外部都是不可以改变枚举的值
//因为枚举的值都是常量

#include <stdio.h>

enum Color//颜色
{
	RED,//0
	GREEN,//1
	BLUE //2
};

int main()
{
	//error
	//enum Color c = 2;//错误（编译运行时都没报错，改成c++文件就报错）
	//“初始化”∶无法从“int”转换为“Color"
	//"int”类型的值不能用于初始化"Color”类型的实体

	return 0;
}