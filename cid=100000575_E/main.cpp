#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int M,N,temp,start,endi;
	int dis[100000]={0};
	while (scanf("%d",&N)!=EOF)
    {
        int sum=0;
        for (int i=0;i<N;i++)
        {
            scanf("%d",&dis[i]);
            sum+=dis[i];
        }
        scanf("%d",&M);
        for (int j=0;j<M;j++)
        {
            scanf("%d%d",&start,&endi);
            int distance=0;
            if (start>endi)
            {
                temp=start;
                start=endi;
                endi=temp;
            }
            for (int k=start-1;k<endi-1;k++)
            {
                distance=distance+dis[k];
            }
            if (distance>sum-distance) distance=sum-distance;
            printf("%d\n",distance);
            //printf("%d\n",sum);
        }
    }

    return 0;
}
