/**	����else
* 
* �������
* ����ʲôҲû����ʾ������û��ֻ��else�����ڵڶ���if���ģ�
* ��Ϊ��һ��if����ж�Ϊ�٣�����û��ִ�еڶ���if��䣬elseҲ��û��ִ�С�
* 
*/
//#include <stdio.h>
//
//int main()
//{
//	int a = 0; 
//	int b = 2; 
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n"); 
//	
//	return 0;
//}

/** ����else
* �ʵ���ʹ��{}����ʹ������߼����������
* ���������Ҫ
*/
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
    {
        if (b == 2)
        {
            printf("hehe\n");
        }
    }
    else
    {
        printf("haha\n");
    }
    return 0;
}