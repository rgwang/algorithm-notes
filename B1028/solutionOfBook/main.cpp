#include <iostream>
#include <stdio.h>
//using namespace std;
struct Person
{
    char name[10];//����
    int yy,mm,dd;//����
}oldest,youngest,left,right,temp;//oldest��youngest������곤����������ˣ�left��right��źϷ����ڵ����ұ߽�

bool LessEqu(Person a,Person b)//���a������С�ڵ���b������true
{
    if (a.yy!=b.yy) return a.yy<=b.yy;
    else if (a.mm!=b.mm) return a.mm<=b.mm;
    else return a.dd<=b.dd;
}

bool MoreEqu(Person a,Person b)//���a�����ڴ��ڵ���b������true
{
    if (a.yy!=b.yy) return a.yy>=b.yy;
    else if (a.mm!=b.mm) return a.mm>=b.mm;
    else return a.dd>=b.dd;
}
void init()
{
    youngest.yy=left.yy=1814;
    oldest.yy=right.yy=2014;
    youngest.mm=oldest.mm=left.mm=right.mm=9;
    youngest.dd=oldest.dd=left.dd=right.dd=6;
}

int main()
{
    //cout << "Hello world!" << endl;
	init();//��ʼ��youngest��oldest��left��right
	int n,num=0;//num��źϷ����ڵ�����
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%s %d/%d/%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
        if (MoreEqu(temp,left)&&LessEqu(temp,right))
        {
            num++;
            if (LessEqu(temp,oldest)) oldest=temp;
            if (MoreEqu(temp,youngest)) youngest=temp;
        }
    }
    if (num==0) printf("0\n");
    else printf("%d %s %s\n",num,oldest.name,youngest.name);
    return 0;
}
