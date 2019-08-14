#include <iostream>
#include <stdio.h>
using namespace std;
struct Person
{
    char id[11];
    char pwd[11];
    bool change;
}person[1000];
int main()
{
    //cout << "Hello world!" << endl;
	int n,num=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%s %s",person[i].id,person[i].pwd);
    }
    for (int i=0;i<n;i++)
    {
        int j=0;
        while (person[i].pwd[j]!='\0')
        {
            if (person[i].pwd[j]=='1')
            {
                person[i].pwd[j]='@';
                person[i].change=true;
            }
            if (person[i].pwd[j]=='l')
            {
                person[i].pwd[j]='L';
                person[i].change=true;
            }
            if (person[i].pwd[j]=='0')
            {
                person[i].pwd[j]='%';
                person[i].change=true;
            }
            if (person[i].pwd[j]=='O')
            {
                person[i].pwd[j]='o';
                person[i].change=true;
            }
            j++;
        }
        if (person[i].change) num++;
    }

    /*for (int i=0;i<n;i++)
    {
        if (person[i].change) num++;
    }*/
    //printf("%d\n",num);
    if (num>0)
    {
        printf("%d\n",num);
        for (int i=0;i<n;i++)
        {
            if (person[i].change)
            {
                printf("%s %s\n",person[i].id,person[i].pwd);
            }
        }
    }
    else
    {
        if (n==1)
        {
            printf("There is 1 account and no account is modified");
        }
        else
        {
            printf("There are %d accounts and no account is modified",n);
        }
    }
    return 0;
}
