#include <iostream>
#include <stdio.h>
#include <cmath>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int bottom=(int)sqrt(2.0*(n+1))-1;//�����εױ�ӵ�е��ַ���
	if (bottom%2==0) bottom--;//ż��ʱ��1������Ϊ����
	int used=(bottom+1)*(bottom+1)/2-1;//�ܹ�����ķǿո��ַ���
	//���������
	for (int i=bottom;i>=1;i-=2)//iΪ��ǰ�еķǿո��ַ���
	{
	    for (int j=0;j<(bottom-i)/2;j++)
        {
            printf(" ");//�ո����Ϊ(bottom-i)/2
        }
        for (int j=0;j<i;j++)
        {
            printf("%c",c);
        }
        printf("\n");
	}
	//���������
	for (int i=3;i<=bottom;i+=2)//iΪ��ǰ�еķǿո��ַ���
	{
	    for (int j=0;j<(bottom-i)/2;j++)
        {
            printf(" ");//�ո����Ϊ(bottom-i)/2
        }
        for (int j=0;j<i;j++)
        {
            printf("%c",c);
        }
        printf("\n");
	}
	printf("%d\n",n-used);//���ʣ���ַ��ĸ���
    return 0;
}
