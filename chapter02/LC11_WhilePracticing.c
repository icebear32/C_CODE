//����getchar����
//getchar()�����Ĺ�����һ��һ���ض�ȡ����������ַ�

#include <stdio.h>

int main()
{
	int ch = getchar();

	putchar(ch);//����һ���ַ�����ӡ���
	printf("%c\n", ch);//��ch���ַ���ӡ���

	return 0;
}