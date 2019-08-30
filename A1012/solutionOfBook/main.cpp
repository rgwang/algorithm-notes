#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

struct Student
{
    int id;//存放6位整数的ID
    int grade[4];//存放4个分数
}stu[2010];

char course[4]={'A','C','M','E'};//按优先级顺序，方便输出
int Rank[1000000][4]={0};//Rank[id][0]~Rank[id][3]为4门课对应的排名
int now;//cmp函数中使用，表示当前按now号分数排序stu数组
bool cmp(Student a,Student b)
{
    return a.grade[now]>b.grade[now];
}
int main()
{
    //cout << "Hello world!" << endl;
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&stu[i].id,&stu[i].grade[1],&stu[i].grade[2],&stu[i].grade[3]);
        stu[i].grade[0]=round((stu[i].grade[1]+stu[i].grade[2]+stu[i].grade[3])/3.0);
    }
    for (now=0;now<4;now++)
    {
        sort(stu,stu+n,cmp);
        Rank[stu[0].id][now]=1;
        for (int i=1;i<n;i++)
        {
            if (stu[i].grade[now]==stu[i-1].grade[now]) Rank[stu[i].id][now]=Rank[stu[i-1].id][now];
            else Rank[stu[i].id][now]=i+1;
        }
    }
    int query;
    for (int i=0;i<m;i++)
    {
        scanf("%d",&query);
        if (Rank[query][0]==0) printf("N/A\n");
        else
        {
            int k=0;
            for (int j=0;j<4;j++)
            {
                if (Rank[query][j]<Rank[query][k]) k=j;
            }
            printf("%d %c\n",Rank[query][k],course[k]);
        }
    }
    return 0;
}
