#include <iostream>
#include <stdio.h>
using namespace std;
char num[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    //cout << "Hello world!" << endl;
	char n[110];
	int i=0,sum=0;
	scanf("%s",n);
	while (n[i]!='\0')
    {
        sum+=n[i]-'0';
        i++;
    }
    char ans[4]={0};
    sprintf(ans,"%d",sum);
    int j=0;
    while (ans[j]!='\0')
    {
        printf("%s",num[ans[j]-'0']);
        if (ans[j+1]!='\0') printf(" ");
        j++;
    }
    return 0;
}
