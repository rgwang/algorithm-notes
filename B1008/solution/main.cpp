#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int a[110];
	int n,m,count=0;//count记录已经输出数的个数
	scanf("%d%d",&n,&m);
	m=m%n;//修正m
	for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=n-m;i<n;i++)//输出n-m号到n-1号
    {
        printf("%d",a[i]);
        count++;
        if (count<n) printf(" ");//如果已经输出数的个数小于n，则输出空格
    }
    for (int i=0;i<n-m;i++)//输出0号到n-m-1号
    {
        printf("%d",a[i]);
        count++;
        if (count<n) printf(" ");
    }
    return 0;
}
