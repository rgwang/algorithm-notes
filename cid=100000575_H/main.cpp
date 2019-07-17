#include <iostream>
#include <stdio.h>
#include <string.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	//int integer1[10],integer2[10];
	//char number1[10],number2[10];
	int x,y;
	int number1,number2;
	while (scanf("%d%d%d%d",&number1,&x,&number2,&y)!=EOF)
    {
        int flag1=0,flag2=0,X=0,Y=0;
        while (number1/10!=0 || (number1/10==0 && number1%10!=0))
        {
            if (number1%10==x) flag1++;
            number1/=10;
        }
        while (number2/10!=0 || (number2/10==0 && number2%10!=0))
        {
            if (number2%10==y) flag2++;
            number2/=10;
        }
        for (int m=1;m<=flag1;m++)
        {
            X=X*10+x;
        }
        for (int n=1;n<=flag2;n++)
        {
            Y=Y*10+y;
        }
        printf("%d\n",X+Y);
    }
    return 0;
}
