#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int T;
	long long x,y,z;  //ע�ⷶΧ���ܳ���int�����ƣ�������Ҫʹ�ó�����long long��
	while (scanf("%d",&T)!=EOF)
    {
        for (int i=0;i<T;i++)
        {
            scanf("%lld%lld%lld",&x,&y,&z);
            if ((x+y)>z) printf("Case #%d: true\n",i+1);
            else printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}
