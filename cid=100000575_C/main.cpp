#include <iostream>
#include <stdio.h>
using namespace std;

int lengthOfInput(int number,int store[])    //�Զ��庯��lengthOfInput���ڷ����������ֵ�λ����������������ְ�λ������Ӧ�����顣
{
    int i=0,flag=1;
    while(flag)
    {
        store[i]=number%10;   //������10��ÿ�γ���������������Ǵ�����������֡�
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
