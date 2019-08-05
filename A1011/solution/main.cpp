#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	double a[3],b[3],c[3],maxi[3],ans;
	char flag[3];
	for (int i=0;i<3;i++)
    {
        scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
        if (a[i]>b[i])
        {
            if (a[i]>c[i]) {maxi[i]=a[i];flag[i]='W';}
            else {maxi[i]=c[i];flag[i]='L';}
        }
        else
        {
            if (b[i]>c[i]) {maxi[i]=b[i];flag[i]='T';}
            else {maxi[i]=c[i];flag[i]='L';}
        }
    }
    ans=(maxi[0]*maxi[1]*maxi[2]*0.65-1)*2;
    printf("%c %c %c %.2f\n",flag[0],flag[1],flag[2],ans);
    return 0;
}
