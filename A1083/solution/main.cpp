#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct Student
{
    char name[11];
    char id[11];
    int grade;
}stu[1000];

bool cmp(Student a,Student b)
{
    return a.grade>b.grade;
}
int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%s%s%d",stu[i].name,stu[i].id,&stu[i].grade);
    }
    int low,high;
    scanf("%d%d",&low,&high);
    sort(stu,stu+n,cmp);
    int flag=0;
    for (int i=0;i<n;i++)
    {
        if (stu[i].grade>=low && stu[i].grade<=high){
        flag++;
        printf("%s %s\n",stu[i].name,stu[i].id);}
    }
    if (flag==0) printf("NONE\n");
    return 0;
}
