#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int i=1,sum=1,temp=0;
	while (sum<=n)
    {
        i++;
        temp=(2*i-1)*2;
        sum+=temp;
    }
    i--;
    for (int j=0;j<i;j++)//前一半
    {
        for (int k=0;k<j;k++)
        {
            printf(" ");
        }
        for (int k=0;k<(2*i-1-j*2);k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    for (int j=i-2;j>=0;j--)//后一半
    {
        for (int k=0;k<j;k++)
        {
            printf(" ");
        }
        for (int k=0;k<(2*i-1-j*2);k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d",n-sum+temp);
    return 0;
}
