//    ����
//        C�����еĳ����ͱ����Ķ������ʽ�������졣C�����еĳ�����Ϊ�������¼��֩U
//        �����泣��
//        const���εĳ�����
//        #define����ı�ʶ������
//        ��ö�ٳ���

#include <stdio.h>
//����
enum Sex
{
 MALE,
 FEMALE,
 SECRET
};
//�����е�MALE,FEMALE,SECRET��ö�ٳ���
int main()
{
    3.14;//���泣��
    1000;//���泣��
    const float pai = 3.14f;   //const ���εĳ���

    //pi = 5.14;//ok?
    // ���д��� �� ������������ͬʱ��������ֵ����Ҫ���¸�ֵ����

    printf("pai = %f\n",pai);

    #define MAX 100            //#define�ı�ʶ������

    return 0;
}