#include <iostream>
#include <stdio.h>
//using namespace std;

struct Person
{
    char name[11],id[11];
    char gender;
    int grade;
}highFemale,lowMale,temp;

void init()
{
    highFemale.gender='n';
    highFemale.grade=0;
    lowMale.gender='n';
    lowMale.grade=100;
}

bool great(Person a,Person b)
{
    return a.grade>=b.grade;
}
int main()
{
    //cout << "Hello world!" << endl;
    init();
    int m;
    scanf("%d",&m);
    for (int i=0;i<m;i++)
    {
        scanf("%s %c %s %d",temp.name,&temp.gender,temp.id,&temp.grade);
        if (temp.gender=='F')
        {
            if (great(temp,highFemale)) highFemale=temp;
        }
        else
        {
            if (great(lowMale,temp)) lowMale=temp;
        }
    }
    if (highFemale.gender=='n') printf("Absent\n");
    else printf("%s %s\n",highFemale.name,highFemale.id);
    if (lowMale.gender=='n') printf("Absent\n");
    else printf("%s %s\n",lowMale.name,lowMale.id);
    if (highFemale.gender=='n' || lowMale.gender=='n') printf("NA\n");
    else printf("%d\n",highFemale.grade-lowMale.grade);
    return 0;
}
