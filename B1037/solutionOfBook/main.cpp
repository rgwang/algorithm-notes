#include <iostream>
#include <stdio.h>
using namespace std;
const int Galleon=17*29;//1��Galleon�һ�17*29��Knut
const int Sickle=29;//1��Sickle�һ�29��Knut

int main()
{
    //cout << "Hello world!" << endl;
	int a1,b1,c1;
	int a2,b2,c2;
	scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
	int price=a1*Galleon+b1*Sickle+c1;//�۸񣬶һ���Knut��λ
	int money=a2*Galleon+b2*Sickle+c2;//����һ���Knut��λ
	int change=money-price;//�����Ǯ
	if (change<0)//����Ǹ���
    {
        printf("-");//�������
        change=-change;//ȡ����ֵ
    }
    //ת����ԭ�ȵĸ�ʽ
    printf("%d.%d.%d\n",change/Galleon,change%Galleon/Sickle,change%Sickle);
    return 0;
}
