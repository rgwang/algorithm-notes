#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int N;
	scanf("%d",&N);
	int jia1,jia2,yi1,yi2,YiDrink=0,JiaDrink=0;
    while (N--)
    {
        scanf("%d%d%d%d",&jia1,&jia2,&yi1,&yi2);
        if (jia1+yi1==jia2)
        {
            if (jia1+yi1!=yi2) YiDrink++;
        }
        else
        {
            if (jia1+yi1==yi2) JiaDrink++;
        }
    }
    printf("%d %d",JiaDrink,YiDrink);
    return 0;
}
