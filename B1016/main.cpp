//²¿·ÖA+B
#include <stdio.h>


int main()
{
    //cout << "Hello world!" << endl;
	long long a,b,da,db;
	scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
	long long pa=0,pb=0;
	while (a){
        if (a%10==da) pa=pa*10+da;
        a=a/10;
	}
	while (b){
        if (b%10==db) pb=pb*10+db;
        b=b/10;
	}
	printf("%lld\n",pa+pb);
    return 0;
}
