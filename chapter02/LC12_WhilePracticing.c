#include <stdio.h>

int main()
{
	int ch = 0;

	//ctrl + z  ==> eof
	//eof - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//输入eof还是不行，ctrl+z才可以停止循环，因为of被放在缓冲区

	/*
	getchar输入字符，每次读取一个字符其他放入缓冲区

	of放入缓冲区，留下e，e被putchar接收

	putchar接收到e <-- eof --> of放入缓冲区

	*/

	return 0;
}

//-----------------------出现问题-----------------------------------

//输入EOF还是不行，ctrl+z才可以停止循环，因为OF被放在缓冲区

//查看系统的EOF其实是 -1

//-----------------------出现问题-----------------------------------