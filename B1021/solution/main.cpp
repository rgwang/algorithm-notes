#include <iostream>
#include <stdio.h>
using namespace std;
char number[10]={'0','1','2','3','4','5','6','7','8','9'};
int y[10]={0};
int main()
{
    //cout << "Hello world!" << endl;
	char ans[1002];
	int num=0;
	//cin.getline(ans,1002);
	scanf("%s",ans);
	while(ans[num]!='\0')
    {
        for (int i=0;i<10;i++)
        {
            if (ans[num]==number[i]) y[i]++;
        }
        num++;
    }
    for (int i=0;i<10;i++)
    {
        if (y[i]!=0) printf("%d:%d\n",i,y[i]);
    }
    return 0;
}
