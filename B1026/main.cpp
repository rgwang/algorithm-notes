#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

const int CLK_TCK=100;
int main()
{
    //cout << "Hello world!" << endl;
	int c1,c2;
	double hh,mm,ss;
	scanf("%d%d",&c1,&c2);
	double temp=(c2-c1)/double(CLK_TCK);
	//printf("%f\n",temp);
	hh=floor(temp/3600);
	//printf("%f\n",hh);
	mm=floor(temp/60-hh*60);
	ss=round(temp-hh*3600-mm*60);
	//printf("%.0f\n",hh);
    //��Ϊ��ĿҪ��ʱ�����Ϊ2λ������������������������䡣��ʵ���ϣ�������%02d��ʵ�֣�
	if (hh<10) printf("0%.0f:",hh);
	else printf("%.0f:",hh);
	if (mm<10) printf("0%.0f:",mm);
	else printf("%.0f:",mm);
	if (ss<10) printf("0%.0f\n",ss);
	else printf("%.0f\n",ss);
    return 0;
}
