#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int k1,k2,e,count=0,temp1=0,temp2=0;
	double c,a[1001]={0},b[1001]={0},y[2002]={0};
	scanf("%d",&k1);
	for (int i=0;i<k1;i++)
    {
        scanf("%d%lf",&e,&c);
        if (temp1<e) temp1=e;
        a[e]+=c;
    }
    e=0;c=0;
    scanf("%d",&k2);
    for (int i=0;i<k2;i++)
    {
        scanf("%d%lf",&e,&c);
        if (temp2<e) temp2=e;
        b[e]+=c;
    }

    for (int j=temp1;j>=0;j--)
    {
        if (a[j]!=0)
        {
            for (int k=0;k<=temp2;k++)
            {
                if (b[k]!=0) y[j+k]=y[j+k]+a[j]*b[k];
            }
        }
    }

    for (int i=0;i<=temp1+temp2;i++)
    {
        if (y[i]!=0) count++;
    }
    printf("%d",count);
    for (int i=temp1+temp2;i>=0;i--)
    {
        if (y[i]!=0) printf(" %d %.1f",i,y[i]);
    }
    return 0;
}
