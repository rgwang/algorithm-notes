#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int a[110];
	int n,m,count=0;//count��¼�Ѿ�������ĸ���
	scanf("%d%d",&n,&m);
	m=m%n;//����m
	for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=n-m;i<n;i++)//���n-m�ŵ�n-1��
    {
        printf("%d",a[i]);
        count++;
        if (count<n) printf(" ");//����Ѿ�������ĸ���С��n��������ո�
    }
    for (int i=0;i<n-m;i++)//���0�ŵ�n-m-1��
    {
        printf("%d",a[i]);
        count++;
        if (count<n) printf(" ");
    }
    return 0;
}
