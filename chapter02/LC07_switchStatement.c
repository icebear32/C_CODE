//��ϰ
#include <stdio.h>

int main()
{
    int n = 1,m = 2;//��ʼ��n =1,m =2
    switch (n)//��Ϊ n=1 ����ִ��case 1
    {
    case 1:
        m++;
    case 2:
        n++;
    /*
        ��Ϊcase 1û�м�break��ִ����case 1����ִ��case 2
        ����m++ ==> 3 n++ ==>2
    */
    case 3://��Ϊcase 2Ҳû�м�break������ִ��
        switch (n)
        {//switch����Ƕ��ʹ��
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break;
        }
        /*
            ����ִ��switch���
            ��Ϊn = 2,����ִ��case 2�����m++ ==> 4 n++==>3
            break�˳�
            ����Ϊcase 3û�м�break������ִ��case 4
        */
    case 4://ִ��case 4m++==> 5 ���� break �˳�
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);//��ӡm= 5, n = 3
    return 0;
}