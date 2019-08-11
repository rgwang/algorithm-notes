#include <iostream>
#include <stdio.h>
using namespace std;
char convert[10][7]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
    //cout << "Hello world!" << endl;
	char in[110];
	int sum=0,i=0,ans[10],j=0;
	scanf("%s",in);
	while (in[i]!='\0')
    {
        sum+=(in[i]-'0');
        i++;
    }
    do
    {
        ans[j]=sum%10;
        sum/=10;
        j++;
    }while(sum!=0);
    for (int k=j-1;k>=0;k--)
    {
        /*switch(ans[k])
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        }*/
        printf("%s",convert[ans[k]]);
        if (k!=0) printf(" ");
    }
    return 0;
}
