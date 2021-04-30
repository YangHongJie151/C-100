
//题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
//程序分析：请参照：C 练习实例14。

#include<stdio.h>

int main()
{
    int i,j;
    int sum=0;

    for(i=2;i<1000;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            } 
        }
        if(i==sum)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}