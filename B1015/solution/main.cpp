#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student
{
    char id[10];//׼��֤��
    int de,cai,sum;//�·֡��ŷ֡��ܷ�
    int flag;//������𣺵�1��~��5��
}student[100010];

bool cmp(Student a,Student b)
{
    if (a.flag!=b.flag) return a.flag<b.flag;//���С����ǰ
    else if (a.sum!=b.sum) return a.sum>b.sum;//�����ͬʱ���ִܷ����ǰ
    else if (a.de!=b.de) return a.de>b.de;//�ܷ���ͬʱ���·ִ����ǰ
    else return strcmp(a.id,b.id)<0;//�·���ͬʱ��׼��֤��С����ǰ
}
int main()
{
    //cout << "Hello world!" << endl;
	int n,L,H;
	scanf("%d%d%d",&n,&L,&H);
	int m=n;//mΪ��������
	for (int i=0;i<n;i++)
    {
        scanf("%s%d%d",student[i].id,&student[i].de,&student[i].cai);
        student[i].sum=student[i].de+student[i].cai;//�����ܷ�
        if (student[i].de<L || student[i].cai<L)//�Ƚ�����������Ϊ��5��
        {
            student[i].flag=5;
            m--;//����������1
        }
        else if (student[i].de>=H && student[i].cai>=H) student[i].flag=1;
        else if (student[i].de>=H && student[i].cai<H) student[i].flag=2;
        else if (student[i].de>=student[i].cai) student[i].flag=3;
        else student[i].flag=4;//��4�������࣬��˷������
    }
    sort(student,student+n,cmp);//����
    printf("%d\n",m);
    for (int i=0;i<m;i++)
    {
        printf("%s %d %d\n",student[i].id,student[i].de,student[i].cai);
    }
    return 0;
}
