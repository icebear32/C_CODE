//ת���ַ�������
//�����������ʲô��
#include <stdio.h>

int main()
{
    printf("%d\n", strlen("abcdef"));//�������6

    // \32��������һ��ת���ַ� ==> ASCII������ձ�ʾ�� /32 ��Ӧ���� space���ո�
    printf("%d\n", strlen("c:test\328\test.c"));//�������14     Ϊʲô��14��

    return 0;
}