#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int num=0;//���ʵĸ���
	char ans[90][90];
	while (scanf("%s",ans[num])!=EOF)//һֱ����ֱ���ļ�ĩβ
	{
	    num++;//���ʸ�����1
	}
	for (int i=num-1;i>=0;i--)//�����������
	{
	    printf("%s",ans[i]);
	    if (i>0) printf(" ");
	}
    return 0;
}
