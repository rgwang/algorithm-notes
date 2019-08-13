#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;

void reverse(char s[])
{
    int len=strlen(s);
    char temp;
    for (int i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
}
int main()
{
    //cout << "Hello world!" << endl;
	int a,b,temp;
	char ans[10],y[20]={0};
	scanf("%d%d",&a,&b);
	temp=abs(a+b);
	sprintf(ans,"%d",temp);
	reverse(ans);
	int len=strlen(ans),j=0;
	//printf("%d",len);
	for (int i=0;i<len;i++)
    {
        if (i!=0 && i%3==0) y[j++]=',';
        y[j++]=ans[i];
    }
    reverse(y);
    if (a+b<0) printf("-");
    //puts(y);
    //printf("%d",strlen(y));
    for (unsigned int i=0;i<strlen(y);i++)
    {
        printf("%c",y[i]);
    }
    return 0;
}
