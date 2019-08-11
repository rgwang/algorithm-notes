#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int n,a;
	scanf("%d",&n);
	a=n/100;
	for (int i=0;i<a;i++)
    {
        printf("B");
    }
    a=n%100/10;
    for (int i=0;i<a;i++)
    {
        printf("S");
    }
    a=n%10;
    for (int i=1;i<=a;i++)
        printf("%d",i);
    return 0;
}
