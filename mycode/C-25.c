
//题目：求1+2!+3!+...+20!的和。
//程序分析：此程序只是把累加变成了累乘。



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    long double num,sum=0;

    for(i=1;i<=20;i++)
    {   
        num=1;
        for(j=1;j<=i;j++)
        { 
            num=num*j; 
        }
        sum=sum+num;

    }

   

    printf("sum=%Lf\n",sum);//输出不出来。。。。。，不知道啥原因
    system("pause");

    return 0;
}