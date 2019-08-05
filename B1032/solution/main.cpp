#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	int score[100001]={0},number,temp;
	for (int i=0;i<n;i++)
    {
        scanf("%d %d",&number,&temp);
        score[number]+=temp;
    }
    int maxnum=0,maxn=0;
    for (int i=0;i<100001;i++)
    {
        if (maxn<score[i])
        {
            maxn=score[i];
            maxnum=i;
        }
    }
    printf("%d %d\n",maxnum,maxn);
    return 0;
}
