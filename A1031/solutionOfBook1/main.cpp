#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	char str[100],ans[40][40];
	cin.getline(str,100);
	int N=strlen(str);//��ȡ����
	int n1=(N+2)/3,n3=n1,n2=N+2-n1-n3;//��ʽ
	for (int i=1;i<=n1;i++)
    {
        for (int j=1;j<=n2;j++)
        {
            ans[i][j]=' ';//��ʼ������ans����ȫ����Ϊ�ո�
        }
    }

    int pos=0;//pos��0��ʼʹ��str����
    for (int i=1;i<=n1;i++)
    {
        ans[i][1]=str[pos++];//�������¸�ֵ���n1���ַ�
    }
    for (int j=2;j<=n2;j++)
    {
        ans[n1][j]=str[pos++];//�������Ҹ�ֵ�ײ�n2-1���ַ�����ȥ����ˣ�
    }
    for (int i=n3-1;i>=1;i--)
    {
        ans[i][n2]=str[pos++];//�������ϸ�ֵ�Ҳ�n3-1���ַ�����ȥ���¶ˣ�
    }
    for (int i=1;i<=n1;i++)
    {
        for (int j=1;j<=n2;j++)
        {
            printf("%c",ans[i][j]);//���������ά����
        }
        printf("\n");
    }
    return 0;
}
