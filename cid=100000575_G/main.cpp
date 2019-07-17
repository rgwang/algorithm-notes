/*#include <iostream>
#include <stdio.h>
//using namespace std;

/*void calculate(int a[],int b[],int n,int m)
{
    int flag1=0,sum=0,flag2=0;
    for (int i=0;i<n;i++)
    {
        printf("%d",sizeof(b));


        if (a[i]%5==0 && a[i]%2==0) b[0]+=a[i];
        if (a[i]%5==1)
        {
            b[5]=1;
            if (!flag1) {b[1]+=a[i];flag1=1;}
            else {b[1]-=a[i];flag1=0;}
        }
        if (a[i]%5==2) b[2]+=1;
        if (a[i]%5==3) {sum+=a[i];flag2+=1;}
        if (a[i]%5==4 && a[i]>b[4]) b[4]=a[i];
        if (flag2!=0) {b[3]=sum;b[6]=flag2;}
    }
}
int main()
{
    //cout << "Hello world!" << endl;
	int N,inNumber[100];
	while (scanf("%d",&N)==1)
    {
        int output[6]={0};
        for (int i=0;i<N;i++)
        {
            scanf("%d",&inNumber[i]);
        }
        //calculate(inNumber,output,N,6);
        int flag1=0,sum=0,flag2=0;
        for (int i=0;i<N;i++)
        {
            //printf("%d",sizeof(b));


            if (inNumber[i]%5==0 && inNumber[i]%2==0) output[0]+=inNumber[i];
            if (inNumber[i]%5==1)
            {
                output[5]=1;
                if (!flag1) {output[1]+=inNumber[i];flag1=1;}
                else {output[1]-=inNumber[i];flag1=0;}
            }
            if (inNumber[i]%5==2) output[2]+=1;
            if (inNumber[i]%5==3) {sum+=inNumber[i];flag2+=1;}
            if (inNumber[i]%5==4 && inNumber[i]>output[4]) output[4]=inNumber[i];
            if (flag2!=0) {output[3]=sum;output[6]=flag2;}
        }
        for (int j=0;j<5;j++)
        {
            switch(j)
            {
            case 1:
                if (output[5]==1) printf("%d ",int(output[j]));
                else printf("%c ",'N');
                break;
            case 3:
                if (output[j]==0) printf("%c ",'N');
                else printf("%.1f ",float(output[3])/output[6]);
                break;
            case 4:
                if (output[j]==0) printf("%c\n",'N');
                else printf("%d\n",int(output[j]));
                break;
            default:
                if (output[j]==0) printf("%c ",'N');
                else printf("%d ",int(output[j]));
            }
        }
    }
    return 0;
}*/
#include<cstdio>
int main()
{
    int m,n;
    int a,b,c,d,e,p,q;
    a=b=c=d=e=0;
    p=1;
    q=0;
    while(scanf("%d",&m)!=EOF)
    {
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&n);
            if(n%5==0&&n%2==0) a+=n;
            if(n%5==1)
            {

                if(p%2==0)
                {
                    n=-n;
                }
                p++;
                b+=n;
            }
            if(n%5==2) c++;
            if(n%5==3)
            {
                d+=n;
                q++;
            }
            if(n%5==4)
            {
                if(e<n) e=n;
            }
        }
        if(a==0) printf("N ");
        else printf("%d ",a);
        if(b==0&&p==1) printf("N ");
        else printf("%d ",b);
        if(c==0) printf("N ");
        else printf("%d ",c);
        if(d==0) printf("N ");
        else printf("%.1f ",(float)d/q);
        if(e==0) printf("N");
        else printf("%d",e);
        a=b=c=d=e=q=0;
        p=1;
        printf("\n");
    }
}
