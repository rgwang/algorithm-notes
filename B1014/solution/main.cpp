#include <iostream>
#include <stdio.h>
//using namespace std;
struct Str
{
    char s[62];
}str[4];

char hour[24]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
int main()
{
    //cout << "Hello world!" << endl;
	//char str1[62],str2[62],str3[62],str4[62];
	for (int i=0;i<4;i++)
    {
        scanf("%s",str[i].s);
    }
    int j=0;
    int flag=0;
    //printf("%c",str[0].s[6]);
    //printf("%c",str[1].s[6]);
    while (str[0].s[j]!='\0' && str[1].s[j]!='\0')
    {
        if (flag==0)
        {
            if (str[0].s[j]==str[1].s[j])
            {
                switch(str[0].s[j])
                {
                case 'A':
                    printf("MON ");
                    flag=1;
                    break;
                case 'B':
                    printf("TUE ");
                    flag=1;
                    break;
                case 'C':
                    printf("WED ");
                    flag=1;
                    break;
                case 'D':
                    printf("THU ");
                    flag=1;
                    break;
                case 'E':
                    printf("FRI ");
                    flag=1;
                    break;
                case 'F':
                    printf("SAT ");
                    flag=1;
                    break;
                case 'G':
                    printf("SUN ");
                    flag=1;
                    break;
                }
                //flag=1;
            }
        }

        j++;

        if (flag==1)
        {
            if (str[0].s[j]==str[1].s[j])
            {
                for (int i=0;i<24;i++)
                {
                    if (str[0].s[j]==hour[i])
                    {
                        printf("%02d",i);
                        //break;
                        flag=2;
                    }
                }
            }
        }
    }
    int k=0;
    while (str[2].s[k]!='\0' && str[3].s[k]!='\0')
    {
        if (str[2].s[k]>='a'&&str[2].s[k]<='z')
        {
            if (str[2].s[k]==str[3].s[k])
            {
                printf(":%02d",k);
                break;
            }
        }
        if (str[2].s[k]>='A' && str[2].s[k]<='Z')//这里注意分钟数只要求字母相同，并不是一定要小写字母。
        {
            if (str[2].s[k]==str[3].s[k])
            {
                printf(":%02d",k);
                break;
            }
        }
        k++;
    }
    return 0;
}
