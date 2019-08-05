#include <iostream>
#include <stdio.h>
using namespace std;
const int maxn = 1010;
struct Student
{
    long long id;//准考证号
    int examseat;//考试座位号
}testSeat[maxn];//以试机座位号作为下标来记录考生
int main()
{
    //cout << "Hello world!" << endl;
	int n,m,seat,examSeat;
	long long id;
	scanf("%d",&n);//考生人数
	for (int i=0;i<n;i++)
    {
        scanf("%lld%d%d",&id,&seat,&examSeat);//准考证号、试机座位号、考试座位号
        testSeat[seat].id=id;//试机座位号为seat的考生的准考证号
        testSeat[seat].examseat=examSeat;//试机座位号为seat的考生的考试座位号
    }
    scanf("%d",&m);//查询个数
    for (int i=0;i<m;i++)
    {
        scanf("%d",&seat);//欲查询的试机座位号，以此为下标直接查找考生
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examseat);
    }
    return 0;
}
