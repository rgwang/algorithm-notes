#include <iostream>
#include <stdio.h>
using namespace std;
struct Student{
    char name[15];
    char id[15];
    int score;
}temp,ans_max,ans_min;//temp�����ʱ���ݣ�ans_maxΪ��߷�����ѧ����ans_minΪ��ͷ�����ѧ��

int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	ans_max.score=-1;//��߳�ʼ������Ϊ-1
	ans_min.score=101;//��ͳ�ʼ������Ϊ101
	for (int i=0;i<n;i++)
    {
        scanf("%s%s%d",temp.name,temp.id,&temp.score);//��ȡѧ����Ϣ
        if (temp.score>ans_max.score) ans_max=temp;//��ѧ���������ߣ�����
        if (temp.score<ans_min.score) ans_min=temp;//��ѧ���������ͣ�����
    }
    printf("%s %s\n",ans_max.name,ans_max.id);
    printf("%s %s\n",ans_min.name,ans_min.id);
    return 0;
}
