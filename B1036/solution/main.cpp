#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int row,col;//行、列
	char c;
	scanf("%d %c",&col,&c);//输入列数、欲使用的字符
	if (col%2==1) row=col/2+1;//col为奇数，向上取整
	else row=col/2;//col为偶数
	for (int i=0;i<col;i++)//第一行
    {
        printf("%c",c);//col个字符
    }
    printf("\n");
    //第2~row-1行
    for (int i=2;i<row;i++)
    {
        printf("%c",c);//每行的第一个a
        for (int j=0;j<col-2;j++)
        {
            printf(" ");//col-2个空格
        }
        printf("%c\n",c);//每行的最后一个a
    }
    //第row行
    for (int i=0;i<col;i++)
    {
        printf("%c",c);//col个字符
    }
    return 0;
}
