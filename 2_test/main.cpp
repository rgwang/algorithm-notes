#include <stdio.h>
/*int main()
{
    //char c1='z',c2='j',c3=117;
    int num1=1,num2=2;
    printf("%d\n\n%d",num1,num2);
    printf("%c",7);
    return 0;
}*/

//冒泡排序
/*int main()
{
    int a[10]={3,1,4,5,2};
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int k=0;k<=4;k++)
    {
        printf("%d\t",a[k]);
    }
    return 0;
}*/

//将两个二维数组对应位置元素相加，并将结果存放到另一个二维数组中
/*int main()
{
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);//输入二维数组a的元素
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);//输入二维数组b的元素
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];//对应位置相加并放到二维数组c中
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

//测试使用getchar输入字符串时，若不加\0，用printf或puts输出会不会出现乱码
/*int main()
{
    char str[15];
    int i;
    for (i=0;i<3;i++)
    {
        str[i]=getchar();
    }
    //[i]='\0';
    puts(str);
    return 0;
}*/

//测试memset函数对数组初始化
/*#include <string.h>
int main()
{
    int a[5]={1,2,3,4,5};
    memset(a,0,sizeof(a));
    for (int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    memset(a,-1,sizeof(a));
    for (int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    memset(a,1,sizeof(a));
    for (int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}*/

//测试sscanf,sprintf
int main()
{
    int n;
    double db;
    char str[100]="2048:3.14,hello",str2[100];
    sscanf(str,"%d:%lf,%s",&n,&db,&str2);
    printf("n=%d,db=%.2f,str2=%s\n",n,db,str2);

    int m=12;
    double db2=3.1415;
    char str1[100],str3[100]="good";
    sprintf(str1,"%d:%.2f,%s",m,db2,str3);
    printf("str=%s\n",str1);
    return 0;
}
