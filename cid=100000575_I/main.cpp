#include <iostream>
#include <stdio.h>
using namespace std;
//0--C,1--J,2--B
int main()
{
    //cout << "Hello world!" << endl;
	int N;

	while (scanf("%d",&N)!=EOF)
    {
        //printf("%d\n",N);
        char jia[2],yi[2];//�ֱ���ÿ����������ơ��������鳤�ȱ�����ڵ���2����Ϊscanf()�����ַ���ʱ���Զ����\0�ַ���Ϊ��β�Ǻ����ռ��һ���ַ�λ��
        int winTimesJIA[3]={0},winTimesYI[3]={0}; //��������ֱ�洢���ҵ�ʤƽ��������
        int winRateJIA[3]={0},winRateYI[3]={0}; //��������ֱ�洢����ÿ�����ƻ�ʤ������
        //printf("%d\n",N);

        for (int i=0;i<N;i++)
        {
            scanf("%s%s",jia,yi);
            if (jia[0]=='C')
            {
                if (yi[0]=='C')
                {
                    winTimesJIA[1]++;
                    winTimesYI[1]++;
                }
                else if (yi[0]=='J')
                {
                    winTimesJIA[0]++;
                    winTimesYI[2]++;
                    winRateJIA[0]++;
                }
                else
                {
                    winTimesJIA[2]++;
                    winTimesYI[0]++;
                    winRateYI[2]++;
                }
            }
            if (jia[0]=='J')
            {
                if (yi[0]=='C')
                {
                    winTimesJIA[2]++;
                    winTimesYI[0]++;
                    winRateYI[0]++;
                }
                else if (yi[0]=='J')
                {
                    winTimesJIA[1]++;
                    winTimesYI[1]++;
                }
                else
                {
                    winTimesJIA[0]++;
                    winTimesYI[2]++;
                    winRateJIA[1]++;
                }
            }
            if (jia[0]=='B')
            {
                if (yi[0]=='C')
                {
                    winTimesJIA[0]++;
                    winTimesYI[2]++;
                    winRateJIA[2]++;
                }
                else if (yi[0]=='J')
                {
                    winTimesJIA[2]++;
                    winTimesYI[0]++;
                    winRateYI[1]++;
                }
                else
                {
                    winTimesJIA[1]++;
                    winTimesYI[1]++;
                }
            }
            //printf("%d\n",N);//������
        }
        printf("%d %d %d\n",winTimesJIA[0],winTimesJIA[1],winTimesJIA[2]);
        printf("%d %d %d\n",winTimesYI[0],winTimesYI[1],winTimesYI[2]);
        //maxJIA
        if (winRateJIA[2]>=winRateJIA[0])
        {
            if (winRateJIA[2]>=winRateJIA[1]) printf("B ");
            else printf("J ");
        }
        else if (winRateJIA[0]>=winRateJIA[1]) printf("C ");
        else printf("J ");

        if (winRateYI[2]>=winRateYI[0])
        {
            if (winRateYI[2]>=winRateYI[1]) printf("B\n");
            else printf("J\n");
        }
        else if (winRateYI[0]>=winRateYI[1]) printf("C\n");
        else printf("J\n");
    }
    return 0;
}
