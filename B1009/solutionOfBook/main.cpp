#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
	int num=0;//单词的个数
	char ans[90][90];
	while (scanf("%s",ans[num])!=EOF)//一直输入直到文件末尾
	{
	    num++;//单词个数加1
	}
	for (int i=num-1;i>=0;i--)//倒着输出单词
	{
	    printf("%s",ans[i]);
	    if (i>0) printf(" ");
	}
    return 0;
}
