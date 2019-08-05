#include <iostream>
#include <stdio.h>
using namespace std;
struct Student{
    char name[15];
    char id[15];
    int score;
}temp,ans_max,ans_min;//temp存放临时数据，ans_max为最高分数的学生，ans_min为最低分数的学生

int main()
{
    //cout << "Hello world!" << endl;
	int n;
	scanf("%d",&n);
	ans_max.score=-1;//最高初始分数设为-1
	ans_min.score=101;//最低初始分数设为101
	for (int i=0;i<n;i++)
    {
        scanf("%s%s%d",temp.name,temp.id,&temp.score);//读取学生信息
        if (temp.score>ans_max.score) ans_max=temp;//该学生分数更高，更新
        if (temp.score<ans_min.score) ans_min=temp;//该学生分数更低，更新
    }
    printf("%s %s\n",ans_max.name,ans_max.id);
    printf("%s %s\n",ans_min.name,ans_min.id);
    return 0;
}
