#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student
{
    char id[10];//准考证号
    int de,cai,sum;//德分、才分、总分
    int flag;//考生类别：第1类~第5类
}student[100010];

bool cmp(Student a,Student b)
{
    if (a.flag!=b.flag) return a.flag<b.flag;//类别小的在前
    else if (a.sum!=b.sum) return a.sum>b.sum;//类别相同时，总分大的在前
    else if (a.de!=b.de) return a.de>b.de;//总分相同时，德分大的在前
    else return strcmp(a.id,b.id)<0;//德分相同时，准考证号小的在前
}
int main()
{
    //cout << "Hello world!" << endl;
	int n,L,H;
	scanf("%d%d%d",&n,&L,&H);
	int m=n;//m为及格人数
	for (int i=0;i<n;i++)
    {
        scanf("%s%d%d",student[i].id,&student[i].de,&student[i].cai);
        student[i].sum=student[i].de+student[i].cai;//计算总分
        if (student[i].de<L || student[i].cai<L)//先将不及格者设为第5类
        {
            student[i].flag=5;
            m--;//及格人数减1
        }
        else if (student[i].de>=H && student[i].cai>=H) student[i].flag=1;
        else if (student[i].de>=H && student[i].cai<H) student[i].flag=2;
        else if (student[i].de>=student[i].cai) student[i].flag=3;
        else student[i].flag=4;//第4类情况最多，因此放在最后
    }
    sort(student,student+n,cmp);//排序
    printf("%d\n",m);
    for (int i=0;i<m;i++)
    {
        printf("%s %d %d\n",student[i].id,student[i].de,student[i].cai);
    }
    return 0;
}
