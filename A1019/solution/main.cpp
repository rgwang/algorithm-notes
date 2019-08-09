#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int a,base,num=0;
	int ans[100000];
	bool flag=true;
	scanf("%d %d",&a,&base);
	do
    {
        ans[num++]=a%base;
        a/=base;
    }while (a!=0);
    for (int i=0;i<num/2;i++)
    {
        if (ans[i]!=ans[num-i-1]) flag=false;
    }
    if (flag) printf("Yes\n");
    else printf("No\n");
    for (int i=num-1;i>=1;i--)
    {
        printf("%d ",ans[i]);
    }
    printf("%d\n",ans[0]);
    return 0;
}
