/*	while����е�break
* 
* �ܽ᣺ 
*	break��whileѭ���е����ã�
*	��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� 
*	���ԣ�while�е�break������������ֹѭ���ġ�
*/
#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)//��iΪ5��ʱ����ֹѭ��
			break;
		printf("%d ", i);//1 2 3 4
		i = i + 1;
	}

	return 0;
}