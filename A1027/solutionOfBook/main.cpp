#include <iostream>
#include <stdio.h>
//using namespace std;
char radix[13]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};//����0~13��'0'~'9','A','B','C'�Ĺ�ϵ
int main()
{
    //cout << "Hello world!" << endl;
	int r,g,b;
	scanf("%d%d%d",&r,&g,&b);
	printf("#");
	//���radix[a]��radix[b]
	printf("%c%c",radix[r/13],radix[r%13]);
	printf("%c%c",radix[g/13],radix[g%13]);
	printf("%c%c",radix[b/13],radix[b%13]);
    return 0;
}
