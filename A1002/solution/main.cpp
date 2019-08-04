#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int k1,k2,e,temp=0,count=0;
	double c;
	double a[1001]={0},b[1001]={0};
	scanf("%d",&k1);
	//printf("%d",k1);
	for (int i=0;i<k1;i++)
    {
        scanf("%d%lf",&e,&c);
        //printf("%d %f\n",e,c);
        if (temp<e) temp=e;
        a[e]=c;
    }
    e=0;c=0;
    scanf("%d",&k2);
    for (int i=0;i<k2;i++)
    {
        scanf("%d%lf",&e,&c);
        if (temp<e) temp=e;
        b[e]=c;
    }
    for (int i=0;i<=temp;i++)
    {
        if ((a[i]+b[i])!=0) {a[i]=a[i]+b[i];count++;}
        else a[i]=0;
    }
    printf("%d",count);
    for (int i=temp;i>=0;i--)
    {
        if (a[i]!=0) printf(" %d %.1f",i,a[i]);
    }
    return 0;
}
