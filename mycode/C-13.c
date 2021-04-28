
//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
//程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。


#include<stdio.h>

int main()
{
    int i,temp;
    int bai,shi,ge;


    
    for(i=100;i<1000;i++)
    {
        bai=i/100;
        shi=i/10%10;
        ge=i%10;
        temp=bai*bai*bai+shi*shi*shi+ge*ge*ge;

        if(i==temp)
        {
            printf("%d\t",i);
        }

    }
    return 0;
}