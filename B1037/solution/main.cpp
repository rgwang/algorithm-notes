#include <iostream>
#include <stdio.h>
using namespace std;
struct money
{
    int a;
    int b;
    int c;
}p,a,temp;
bool great(money a,money b)
{
    if (a.a!=b.a) return a.a>b.a;
    else if (a.b!=b.b) return a.b>b.b;
    else return a.c>b.c;
}
int main()
{
    //cout << "Hello world!" << endl;
	//int p[3],a[3];
	scanf("%d.%d.%d",&p.a,&p.b,&p.c);
	scanf("%d.%d.%d",&a.a,&a.b,&a.c);
	int flag=0;
	if (great(p,a))
    {
        temp=p;
        p=a;
        a=temp;
        flag=1;
    }
	if (a.c>=p.c) a.c-=p.c;
	else {a.c=a.c+29-p.c;a.b--;}
	if (a.b>=p.b) a.b-=p.b;
	else {a.b=a.b+17-p.b;a.a--;}
	a.a-=p.a;
	if (flag) printf("-");
	printf("%d.%d.%d\n",a.a,a.b,a.c);
    return 0;
}
