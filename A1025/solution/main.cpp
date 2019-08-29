#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

struct Testee
{
    char registration_number[15];
    int score;
    int final_rank;
    int location_number;
    int local_rank;
}testee[30010];

bool cmp(Testee a,Testee b)
{
    if (a.score!=b.score) return a.score>b.score;
    else return strcmp(a.registration_number,b.registration_number)<0;
}

int main()
{
    //cout << "Hello world!" << endl;
    int n,k,sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&k);
        for (int j=0+sum;j<k+sum;j++)
        {
            scanf("%s %d",testee[j].registration_number,&testee[j].score);
            testee[j].location_number=i+1;
        }
        sum+=k;
    }
    sort(testee,testee+sum,cmp);
    testee[0].final_rank=1;
    //testee[0].local_rank=1;
    int local_sum;
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<sum;j++)
        {
            if (testee[j].location_number==i)
            {
                testee[j].local_rank=1;
                local_sum=j;
                break;
            }
        }
        int y=local_sum,count=1;
        for (int x=local_sum+1;x<sum;x++)
        {
            /*if (testee[i].score==testee[i-1].score) testee[i].final_rank=testee[i-1].final_rank;
            else testee[i].final_rank=testee[i-1].final_rank+i;*/

            if (testee[x].location_number==i)
            {
                if (testee[x].score==testee[y].score)
                {
                    testee[x].local_rank=testee[y].local_rank;
                    count++;
                }
                else
                {
                    testee[x].local_rank=testee[y].local_rank+count;
                    count=1;
                    y=x;
                }
            }
        }
    }

    for (int i=1;i<sum;i++)
    {
        if (testee[i].score==testee[i-1].score) testee[i].final_rank=testee[i-1].final_rank;
        else testee[i].final_rank=1+i;
    }

    printf("%d\n",sum);
    for (int i=0;i<sum;i++)
    {
        printf("%s %d %d %d\n",testee[i].registration_number,testee[i].final_rank,testee[i].location_number,testee[i].local_rank);
    }
    return 0;
}
