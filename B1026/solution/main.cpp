//课本标答
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int ans=c2-c1;//按题目要求作差
	if (ans%100>=50) {//四舍五入操作，这里没有用round函数，因为会涉及浮点数使写法变复杂。
        ans=ans/100+1;
	} else {
	    ans=ans/100;
	}
	printf("%02d:%02d:%02d\n",ans/3600,ans%3600/60,ans%60);
    return 0;
}
