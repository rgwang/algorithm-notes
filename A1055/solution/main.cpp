#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

struct Person
{
    char name[10];
    int age;
    int worth;
}person[100010];

bool cmp(Person a,Person b)
{
    if (a.worth!=b.worth) return a.worth>b.worth;
    else if (a.age!=b.age) return a.age<b.age;
    else return strcmp(a.name,b.name)<0;
}
int main()
{
    //cout << "Hello world!" << endl;
	int n,k;
	int m,amin,amax;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++)
    {
        scanf("%s %d %d",person[i].name,&person[i].age,&person[i].worth);
    }

    sort(person,person+n,cmp);

    for (int i=0;i<k;i++)
    {
        scanf("%d %d %d",&m,&amin,&amax);
        int num=0,j=0;
        printf("Case #%d:\n",i+1);
        while (j<n && num<m)
        {
            if (person[j].age>=amin && person[j].age<=amax)
            {
                printf("%s %d %d\n",person[j].name,person[j].age,person[j].worth);
                num++;
            }
            j++;
        }
        if (num==0) printf("None\n");
    }
    return 0;
}
