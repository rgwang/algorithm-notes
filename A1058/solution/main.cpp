#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int a[3]={0},b[3]={0};
	scanf("%d.%d.%d",&a[0],&a[1],&a[2]);
	scanf("%d.%d.%d",&b[0],&b[1],&b[2]);
	if (a[2]+b[2]>=29) {a[2]=a[2]+b[2]-29;a[1]++;}
	else a[2]+=b[2];
	if (a[1]+b[1]>=17) {a[1]=a[1]+b[1]-17;a[0]++;}
	else a[1]+=b[1];
	a[0]+=b[0];
	printf("%d.%d.%d",a[0],a[1],a[2]);
    return 0;
}
