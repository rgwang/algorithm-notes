#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int row,col;//�С���
	char c;
	scanf("%d %c",&col,&c);//������������ʹ�õ��ַ�
	if (col%2==1) row=col/2+1;//colΪ����������ȡ��
	else row=col/2;//colΪż��
	for (int i=0;i<col;i++)//��һ��
    {
        printf("%c",c);//col���ַ�
    }
    printf("\n");
    //��2~row-1��
    for (int i=2;i<row;i++)
    {
        printf("%c",c);//ÿ�еĵ�һ��a
        for (int j=0;j<col-2;j++)
        {
            printf(" ");//col-2���ո�
        }
        printf("%c\n",c);//ÿ�е����һ��a
    }
    //��row��
    for (int i=0;i<col;i++)
    {
        printf("%c",c);//col���ַ�
    }
    return 0;
}
