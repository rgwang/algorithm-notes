#include <iostream>
#include <stdio.h>
using namespace std;

struct Person
{
    char a[17];
    int numa;
    int numb;
}p[1000];
int main()
{
    //cout << "Hello world!" << endl;
	int N;
	//Person
	//char a[17];
	scanf("%d",&N);
	for (int i=0;i<N;i++)
    {
        scanf("%s%d%d",p[i].a,&p[i].numa,&p[i].numb);
    }
    int M,a[1000];
    scanf("%d",&M);
    for (int i=0;i<M;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            if (a[i]==p[j].numa) printf("%s %d\n",p[j].a,p[j].numb);
        }
    }
    return 0;
}
