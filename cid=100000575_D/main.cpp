#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    int num[1000]={0};
	while (scanf("%d",&n)!=EOF)
    {
        int flag1=0,flag2=0;
        for (int i=0;i<n;i++)
        {
            scanf("%d",num+i);
        }
        for (int j=0;j<n;j++)
        {
            if (num[j]%2==0) flag1+=1;
            else flag2+=1;
        }
        if (flag1>flag2) printf("%s\n","NO");
        else printf("%s\n","YES");
    }
    return 0;
}
