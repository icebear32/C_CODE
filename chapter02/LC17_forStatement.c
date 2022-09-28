//for循环
//可以发现在while循环中依然存在循环的三个必须条件，
//但是由于风格的问题使得三个部分很可能偏离较远，
//这样查找修改就不够集中和方便。
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;//while初始化

	//初始化	判断	调整
	for (i = 1; i <= 10; i++)
	{
		printf("for:%d\n", i);
	}

	while (j < 10)//判断
	{
		printf("while:%d\n", j);
		j++;//调整
	}

	return 0;
}


//相同方法用while循环
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;//while初始化
//
//	//初始化	判断	调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("for:%d\n", i);
//	}
//	//因为循环到i=5的时候，if语句判断成立跳过循环，执行下一次循环
//
//	//while (j < 10)//判断
//	//{
//	//	if (j == 5)
//	//		continue;
//	//	printf("while:%d\n", j);
//	//	j++;//调整
//	//}
//	//因为j=5的时候判断跳过循环执行下一次循环，但是没有进行调整操作，还是等于5，继续就死循环
//
//	return 0;
//}