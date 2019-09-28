#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;

struct Record
{
    int id;
    char name[10];
    int grade;
}student[100010];

bool cmp1(Record a,Record b)
{
    return a.id<b.id;
}

bool cmp2(Record a,Record b)
{
    if (strcmp(a.name,b.name)!=0) return strcmp(a.name,b.name)<0;
    else return a.id<b.id;
}

bool cmp3(Record a,Record b)
{
    if (a.grade!=b.grade) return a.grade<b.grade;
    else return a.id<b.id;
}

int main()
{
    //cout << "Hello world!" << endl;
	int n,c;
	scanf("%d %d",&n,&c);
	for (int i=0;i<n;i++)
    {
        scanf("%d %s %d",&student[i].id,student[i].name,&student[i].grade);
    }

    switch(c)
    {
    case 1:
        sort(student,student+n,cmp1);
        break;
    case 2:
        sort(student,student+n,cmp2);
        break;
    case 3:
        sort(student,student+n,cmp3);
    }

    for (int i=0;i<n;i++)
    {
        printf("%06d %s %d\n",student[i].id,student[i].name,student[i].grade);
    }
    return 0;
}
