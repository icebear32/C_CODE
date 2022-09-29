//写一个函数可以交换两个整型变量的内容。
//错误示范：不能完成任务，代码运行没有得出想要的内容
/*
    步骤1：传入参数 - 传值操作
    步骤2：进入自定义函数，接收传入的参数x=20,y=20
    步骤3：进行交换x=20,y=10

    因为xy的地址和num1, num2的地址不一样
    xy交换成功的数并不是num1, num2的地址
    num1,num2没有发生改变

    步骤4：printf打印num1=10，num2=20，没有交换成功

    程序错误
*/
//#include <stdio.h>
//
//void swap1(x, y)
//{
//    int num = 0;
//    num = x;
//    x = y;
//    y = num;
//}
//
//int main()
//{
//    int num1 = 10;
//    int num2 = 20;
//    swap1(num1, num2);//传值操作，传入的参数是值不是地址
//    printf("num1 = %d , num2 = %d \n", num1, num2);
//
//    return 0;
//}


//指针方法解决
#include <stdio.h>

void swap2(int* px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	swap2(&num1, &num2);
	printf("num1 = %d , num2 = %d \n", num1, num2);

	return 0;
}