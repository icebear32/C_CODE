/*while����е�continue
* 
* �ܽ�: 
*	continue��whileѭ���е����þ��ǣ�
*		continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
*		����ֱ����ת��while�����жϲ��֡�
*		������һ��ѭ��������жϡ�
*/




////continue��ѭ����
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//����
#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 10)
	{
		i = i + 1;
		if (i == 5)//�ж�Ϊ5�����������ô�ѭ��
			continue;
		printf("%d ", i);
	}
	return 0;
}