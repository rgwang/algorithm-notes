#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
struct Sentence
{
    char in[258];
}sentence[100];

void reverse(char a[])
{
    int len=strlen(a);
    char temp;
    for (int i=0;i<len/2;i++)
    {
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
}
int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	int len[100],minlen=258,num=0;
	char ans[258]={0};
	getchar();//吸收scanf后的换行符
	for (int i=0;i<n;i++)
    {
        cin.getline(sentence[i].in,258);
        //scanf("%s",sentence[i].in);
        reverse(sentence[i].in);
        len[i]=strlen(sentence[i].in);//printf("%d ",len[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (len[i]<minlen) minlen=len[i];
    }
    for (int i=0;i<minlen;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (sentence[j].in[i]!=sentence[j+1].in[i]) goto label;
            else if (j==n-2) {ans[i]=sentence[j].in[i];num++;}
        }
    }
    label:
    if (num==0) printf("nai");
    else
    {
        reverse(ans);
        printf("%s",ans);
    }
    return 0;
}
