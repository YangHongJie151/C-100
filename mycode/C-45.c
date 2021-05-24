

//题目：学习使用register定义变量的方法。


#include<stdio.h>

int main()
{   
    register int i;
    int sum=0;

    for(i=1;i<=100;i++)
    {
        sum+=i;
    }

    printf("sum=%d\n",sum);


    return 0;
}