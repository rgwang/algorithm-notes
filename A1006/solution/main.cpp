#include <iostream>
#include <stdio.h>
//using namespace std;
struct Person
{
    char id[16];
    int inHH;
    int inMM;
    int inSS;
    int outHH;
    int outMM;
    int outSS;
}unlock,lock,temp;

void init()
{
    unlock.inHH=23;
    unlock.inMM=59;
    unlock.inSS=59;
    lock.outHH=00;
    lock.outMM=00;
    lock.outSS=00;
}

bool early(Person a, Person b)
{
    if (a.inHH!=b.inHH) return a.inHH<b.inHH;
    else if (a.inMM!=b.inMM) return a.inMM<b.inMM;
    else return a.inSS<b.inSS;
}

bool late(Person a,Person b)
{
    if (a.outHH!=b.outHH) return a.outHH>b.outHH;
    else if (a.outMM!=b.outMM) return a.outMM>b.outMM;
    else return a.outSS>b.outSS;
}

int main()
{
    //cout << "Hello world!" << endl;
	init();
	int m;
	scanf("%d",&m);
	for (int i=0;i<m;i++)
    {
        scanf("%s %d:%d:%d %d:%d:%d",temp.id,&temp.inHH,&temp.inMM,&temp.inSS,&temp.outHH,&temp.outMM,&temp.outSS);
        if (early(temp,unlock))
        {
            unlock=temp;
        }
        if (late(temp,lock))
        {
            lock=temp;
        }
    }
    printf("%s %s\n",unlock.id,lock.id);
    return 0;
}
