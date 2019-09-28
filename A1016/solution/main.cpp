#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

struct Customer
{
    char name[21];
    int mm1,dd,hh,mm2;
    char state[15];
}customer[1001];

bool cmp(Customer a,Customer b)
{
    if (strcmp(a.name,b.name)!=0) return strcmp(a.name,b.name)<0;
    else if (a.mm1!=b.mm1) return a.mm1<b.mm1;
    else if (a.dd!=b.dd) return a.dd<b.dd;
    else if (a.hh!=b.hh) return a.hh<b.hh;
    else return a.mm2<b.mm2;
}
int centsPerMin[24];
int main()
{
    //cout << "Hello world!" << endl;
	for (int i=0;i<24;i++)
    {
        scanf("%d",&centsPerMin[i]);
    }

    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s %d:%d:%d:%d %s",customer[i].name,&customer[i].mm1,&customer[i].dd,&customer[i].hh,&customer[i].mm2,customer[i].state);
    }

    sort(customer,customer+n,cmp);
    /*for (int i=0;i<n;i++)
    {
        printf("%s %d %d %d %d %s\n",customer[i].name,customer[i].mm1,customer[i].dd,customer[i].hh,customer[i].mm2,customer[i].state);
    }*/
    //printf("%s %02d\n",customer[0].name,customer[0].mm1);
//    bool flag1=false,flag2=true;
    int lastingTime=0;
    int toll=0;
    int sum=0;
    int flag=0;
    //double toll;
    for (int i=0;i<n;i++)
    {
        if (strcmp(customer[i].state,"on-line")==0)
        {
            //printf("%s\n",customer[i].state);
            /*if (customer[i+1].name!=customer[i].name)
            {
                //printf("%")
                printf("Total amount: $%.2f\n",sum/100.00);
                printf("%s %02d\n",customer[i+1].name,customer[i+1].mm1);
                //lastingTime=0
                toll=0;
                sum=0;
                //printf("1\n");
            }
            continue;
        }*/
        //else continue;
        //else{
            if (strcmp(customer[i+1].name,customer[i].name)==0)
            {
                if (strcmp(customer[i+1].state,"off-line")==0)
                {
                    if (flag==0) printf("%s %02d\n",customer[i].name,customer[i].mm1);
                    Customer temp=customer[i];
                    lastingTime=(customer[i+1].dd-customer[i].dd)*24*60+(customer[i+1].hh-customer[i].hh)*60+(customer[i+1].mm2-customer[i].mm2);
                    while (temp.mm1!=customer[i+1].mm1 || temp.dd!=customer[i+1].dd || temp.hh!=customer[i+1].hh || temp.mm2!=customer[i+1].mm2)
                    {
                        temp.mm2++;
                        toll+=centsPerMin[temp.hh];
                        if (temp.mm2==60)
                        {
                            temp.mm2=0;
                            temp.hh++;
                        }
                        if (temp.hh==24)
                        {
                            temp.hh=0;
                            temp.dd++;
                        }
                    }
                    printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",customer[i].dd,customer[i].hh,customer[i].mm2,
                       customer[i+1].dd,customer[i+1].hh,customer[i+1].mm2,lastingTime,toll/100.00);
                    sum+=toll;
                    toll=0;
                    flag++;
                }
            }

            //if (strcmp(customer[i+1].name,customer[i].name)!=0)
            else
            {
                //printf("Total amount: $%.2f\n",sum/100.00);
                //flag=0;
                if (flag!=0) printf("Total amount: $%.2f\n",sum/100.00);//printf("%s %02d\n",customer[i+1].name,customer[i+1].mm1);
                //lastingTime=0
                flag=0;
                toll=0;
                sum=0;
            }
        }
        else
        {
            if (strcmp(customer[i+1].name,customer[i].name)!=0)
            {
                if (flag!=0) printf("Total amount: $%.2f\n",sum/100.00);
                //printf("%s %02d\n",customer[i+1].name,customer[i+1].mm1);
                //lastingTime=0
                toll=0;
                sum=0;
                flag=0;
            }
        }
    }

    return 0;
}
