#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
const int maxn=256;
bool judge(char str[])
{
    int len=strlen(str);
    for (int i=0;i<len/2;i++)
    {
        if (str[i]!=str[len-1-i]) return false;
    }
    return true;
}
int main()
{
    //cout << "Hello world!" << endl;
	char str[maxn];
	while (cin.getline(str,maxn))
    {
        bool flag=judge(str);
        if (flag==true)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
