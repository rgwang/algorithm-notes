#include <iostream>
#include <stdio.h>
using namespace std;
//���룺�ڵ�һ�и���������10^5��������N�����N�У�ÿ�и���һλ�����ߵ���Ϣ�ͳɼ����������������ѧУ�ı�ţ���1��ʼ������ţ�
//��������ɼ����ٷ��ƣ����м��Կո�ָ���
//�������һ���и����ܵ÷���ߵ�ѧУ�ı�ż����ܷ֣��м��Կո�ָ�����Ŀ��֤��Ψһ��û�в��С�

const int maxn=100010;
int school[maxn]={0};
int main()
{
    //cout << "Hello world!" << endl;
	int n,schID,score;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%d%d",&schID,&score);
        school[schID]+=score;
    }
    int k=1,MAX=-1;
    for(int i=1;i<n;i++)
    {
        if(school[i]>MAX)
        {
            MAX=school[i];
            k=i;
        }
    }
    printf("%d %d\n",k,MAX);
    return 0;
}
