#include <iostream>
#include <stdio.h>
using namespace std;
int num[10];
int main()
{
    //cout << "Hello world!" << endl;
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=a+b;//��a+b��ֵ��sum
	if (sum<0)//sumΪ����ʱ��������Ų�ȡsum���෴��
    {
        printf("-");
        sum=-sum;
    }
    int len=0;//len���sum�ĳ���
    if (sum==0) num[len++]=0;//sumΪ0ʱ���⴦��
    //��sum��������num[]�У�����sum�ĵ�λ��ŵ�num[]�ĵ�λ
    while (sum)
    {//��sum��ĩλsum%10��ŵ�num[len]��Ȼ��len++
        num[len++]=sum%10;
        sum/=10;//ȥ��sum��ĩλ
    }
    for (int k=len-1;k>=0;k--)//�Ӹ�λ��ʼ���
    {
        printf("%d",num[k]);
        if (k>0 && k%3==0) printf(",");//ÿ3λһ�����ţ����һλ����
    }
    return 0;
}
