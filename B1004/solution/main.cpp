#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct Student
{
    char name[11];
    char stuNumber[11];
    int score;
}student[1000];

bool cmp(Student a,Student b)
{
    return a.score>b.score;
}
int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%s%s%d",student[i].name,student[i].stuNumber,&student[i].score);
    }
    //int temp=0;
    sort(student,student+n,cmp);
    printf("%s %s\n",student[0].name,student[0].stuNumber);
    printf("%s %s\n",student[n-1].name,student[n-1].stuNumber);
    return 0;
}
