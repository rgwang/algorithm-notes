#include <iostream>
#include <stdio.h>
//using namespace std;
void convert(int x,int a[],int num)
{
    do
    {
        a[num++]=x%13;
        x/=13;
    }while (x!=0);
}
void print(int a[])
{
    for (int i=1;i>=0;i--)
    {
        switch(a[i])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        default:
            printf("%d",a[i]);
            break;
        }
    }
}
int main()
{
    //cout << "Hello world!" << endl;
	int a,b,c,num1=0,num2=0,num3=0,left[2]={0},middle[2]={0},right[2]={0};
	scanf("%d%d%d",&a,&b,&c);
	convert(a,left,num1);
	convert(b,middle,num2);
	convert(c,right,num3);
	printf("#");
	print(left);
	print(middle);
	print(right);
    return 0;
}
