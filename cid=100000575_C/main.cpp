#include <iostream>
#include <stdio.h>
using namespace std;

int lengthOfInput(int number,int store[])    //自定义函数lengthOfInput用于返回输入数字的位数，并将输入的数字按位存入相应的数组。
{
    int i=0,flag=1;
    while(flag)
    {
        store[i]=number%10;   //连续除10，每次除法计算的余数就是从右向左的数字。
        number/=10;
        flag=number;
        i++;
    }
    return i;
}
int main()
{
    //cout << "Hello world!" << endl;
    int n1,n2;
	while(scanf("%d%d",&n1,&n2)!=EOF)
    {
        int number1[10],number2[10];
        int length1,length2,sum=0;
        length1=lengthOfInput(n1,number1);
        length2=lengthOfInput(n2,number2);
        for (int i=0;i<length1;i++)
        {
            for (int j=0;j<length2;j++)
            {
                sum=sum+number1[i]*number2[j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
