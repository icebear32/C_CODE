#include <stdio.h>
int main()
{
    int ch = 0;

    while ((ch = getchar()) != EOF)//����EOFֹͣѭ��
    {
        if (ch < '0' || ch > '9')//�����������ֵ��ַ����������ѭ�����ص�while�ж���䣬����ѭ��
            continue;
        putchar(ch);//���������ַ��ʹ�ӡ���
    }
    return 0;
}