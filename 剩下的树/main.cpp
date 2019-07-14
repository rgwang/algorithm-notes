/*#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    int L,M;
    //int low,high,sum=0;
    while(scanf("%d%d",&L,&M)!=EOF)
    {
        int numOfTree[10001]={0};
        int low,high,sum=0;
        for (int i=0;i<=L;i++)
        {
            numOfTree[i]=1;
        }
        for (int j=0;j<M;j++)
        {
            scanf("%d%d",&low,&high);
            for (int k=low;k<=high;k++)
            {
                numOfTree[k]=0;
            }
        }
        for (int m=0;m<=L;m++)
        {
            if(numOfTree[m]==1) sum+=1;
        }
        printf("%d\n",sum);
    }

    //cout << "Hello world!" << endl;
    return 0;
}*/

#include <stdio.h>
#include <string.h>
int len[10000];
int main()
{
    int l, m;
    int a, b;
    while(scanf("%d%d", &l, &m))
    {
        int number = 0;
        if(l == 0 && m == 0)
            break;
        memset(len, 0, sizeof(len));
        while(m--)
        {
            scanf("%d%d", &a, &b);
            for(int i = a; i <= b; i++)
            {
                len[i] = 1;
            }
        }
        for(int j = 0; j <= l; j++)
        {
            if(len[j] == 0)
                number++;
        }
        printf("%d\n", number);
    }
    return 0;
}
