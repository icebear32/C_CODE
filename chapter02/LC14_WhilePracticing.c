//修改代码--确认密码
#include <stdio.h>

int main()
{
	int ret = 0, ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//输入密码,并存放在passsword数组中

	//修改
	//缓冲区还有一个“\n”，可以再用getchar()读取一下“\n”
	//但是若输入的时候有空格，空格也是会停止输入数组
	//空格后面若很多字符，可以设置一个while循环读取字符掉
	while ((ch = getchar()) != '\n')
	{
		;//空语句，因为此处不需要有操作
	}


	printf("请确认(Y/N):>");
	ret = getchar();//输入一个Y/N字符
	if (ret == 'Y')//判断是否输入的事“Y”
	{
		printf("确认成功\n");//如果输入“Y”字符则输出确认成功
	}
	else
	{
		printf("放弃确认\n");//否则输出确认成功
	}

	return 0;
}