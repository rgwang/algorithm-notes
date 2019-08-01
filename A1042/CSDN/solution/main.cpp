#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int order[54];
struct card
{
	int no;
	int seq;
}c[54];
bool cmp(card a,card b)
{
	return a.seq<b.seq;
}
char str[5]={'S','H','C','D','J'};
int main()
{
	int k;
	scanf("%d",&k);
	for(int i=0;i<54;++i)
	{
		scanf("%d",&order[i]);
		c[i].no=i;
	}
	for(int i=0;i<k;++i)
	{
		for(int j=0;j<54;++j)
		{
			c[j].seq=order[j];
		}
		sort(c,c+54,cmp);
	}
	for(int i=0;i<54;++i)
	{
		printf("%c%d",str[c[i].no/13],c[i].no%13+1);
		printf("%c",i<53?' ':'\n');
	}
    return 0;
}
