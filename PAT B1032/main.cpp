#include <iostream>
#include <stdio.h>
using namespace std;
//输入：在第一行给出不超过10^5的正整数N，随后N行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从1开始连续编号）
//及其比赛成绩（百分制），中间以空格分隔。
//输出：在一行中给出总得分最高的学校的编号及其总分，中间以空格分隔。题目保证答案唯一，没有并列。

const int maxn=100010;
int school[maxn]={0};
int main()
{
    //cout << "Hello world!" << endl;
	int n,schID,score;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
    {
        scanf("%d%d",&schID,&score);
        school[schID]+=score;
    }
    int k=1,MAX=-1;
    for(int i=1;i<n;i++)
    {
        if(school[i]>MAX)
        {
            MAX=school[i];
            k=i;
        }
    }
    printf("%d %d\n",k,MAX);
    return 0;
}
