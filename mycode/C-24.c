

//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//程序分析：请抓住分子与分母的变化规律。



#include<stdio.h>

int main()
{
    int i;
    float temp,m,n,sum=0;

    m=2;
    n=1;

    for(i=0;i<20;i++)
    {
        sum=sum+m/n;

        temp=n;//先保留n上一次的值
        n=m;//分母下的n是上一次的m的值

        m=m+temp;//分子的m是上一次n+m的值

    }

    printf("sum=%f\n",sum);


    return 0;
}