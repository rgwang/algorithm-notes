#include <iostream>
#include <stdio.h>
using namespace std;
const int maxn = 1010;
struct Student
{
    long long id;//׼��֤��
    int examseat;//������λ��
}testSeat[maxn];//���Ի���λ����Ϊ�±�����¼����
int main()
{
    //cout << "Hello world!" << endl;
	int n,m,seat,examSeat;
	long long id;
	scanf("%d",&n);//��������
	for (int i=0;i<n;i++)
    {
        scanf("%lld%d%d",&id,&seat,&examSeat);//׼��֤�š��Ի���λ�š�������λ��
        testSeat[seat].id=id;//�Ի���λ��Ϊseat�Ŀ�����׼��֤��
        testSeat[seat].examseat=examSeat;//�Ի���λ��Ϊseat�Ŀ����Ŀ�����λ��
    }
    scanf("%d",&m);//��ѯ����
    for (int i=0;i<m;i++)
    {
        scanf("%d",&seat);//����ѯ���Ի���λ�ţ��Դ�Ϊ�±�ֱ�Ӳ��ҿ���
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examseat);
    }
    return 0;
}
