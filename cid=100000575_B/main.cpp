#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    char char1[100],char2[100];
	while(scanf("%s%s",char1,char2)!=EOF)
	{
	    //char char1[100],char2[100];
	    //int numOfComma1=0,numOfComma2=0;
	    char realNum1[100],realNum2[100];
	    int len1=0,len2=0;
	    for(unsigned int i=0;i<=strlen(char1);i++)
        {
            //if(char1[i]==',') numOfComma1+=1;
            if (char1[i]!=',') {realNum1[len1]=char1[i];len1+=1;}
        }
        //char num1[strlen(char1)-numOfComma1+1],num2[strlen(char2)-numOfComma2+1];
        for (unsigned int j=0;j<=strlen(char2);j++)
        {
            if(char2[j]!=',') {realNum2[len2]=char2[j];len2+=1;}
        }
        int d1=0,d2=0;
        sscanf(realNum1,"%d",&d1);
        sscanf(realNum2,"%d",&d2);
        printf("%d\n",d1+d2);
	}

    return 0;
}
