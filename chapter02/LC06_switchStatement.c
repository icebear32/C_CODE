//	����1���������һ
//	����2��������ڶ�
//	����3�����������
//	����4�����������
//	����5�����������
//	����6�����������
//	����7�����������

//switch (���ͱ��ʽ)
//{
//	����
//}
//
//����
//case ���ͳ������ʽ
//	���;


#include <stdio.h>
int main()
{
    int day = 3;
    switch (day)
    {
    case 1:
        printf("����һ\n");
        break;
    case 2:
        printf("���ڶ�\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n");
        break;
    case 6:
        printf("������\n");
        break;
    case 7:
        printf("������\n");
        break;
    default :
        printf("�������");
        break;
    }
    return 0;
}