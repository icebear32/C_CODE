//forѭ��
//���Է�����whileѭ������Ȼ����ѭ������������������
//�������ڷ�������ʹ���������ֺܿ���ƫ���Զ��
//���������޸ľͲ������кͷ��㡣
#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;//while��ʼ��

	//��ʼ��	�ж�	����
	for (i = 1; i <= 10; i++)
	{
		printf("for:%d\n", i);
	}

	while (j < 10)//�ж�
	{
		printf("while:%d\n", j);
		j++;//����
	}

	return 0;
}


//��ͬ������whileѭ��
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;//while��ʼ��
//
//	//��ʼ��	�ж�	����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("for:%d\n", i);
//	}
//	//��Ϊѭ����i=5��ʱ��if����жϳ�������ѭ����ִ����һ��ѭ��
//
//	//while (j < 10)//�ж�
//	//{
//	//	if (j == 5)
//	//		continue;
//	//	printf("while:%d\n", j);
//	//	j++;//����
//	//}
//	//��Ϊj=5��ʱ���ж�����ѭ��ִ����һ��ѭ��������û�н��е������������ǵ���5����������ѭ��
//
//	return 0;
//}