//题目：输入某年某月某日，判断这一天是这一年的第几天？
//程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

#include<stdio.h>


int Leap_year(int year)
{
    if((year%4==0)&&(year%100!=0))
    {
        return 1;
    }
    else if(year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int sum=0;
    int flag=0;
    int year=0,month=0,day=0;
    printf("please input year,month,day:");
    scanf("%d%d%d",&year,&month,&day);

    switch (month)
    {
        case 1: sum=0;break;
        case 2: sum=31;break;
        case 3: sum=59;break;
        case 4: sum=90;break;
        case 5: sum=120;break;
        case 6: sum=151;break;
        case 7: sum=181;break;
        case 8: sum=212;break;
        case 9: sum=243;break;
        case 10: sum=273;break;
        case 11: sum=304;break;
        case 12: sum=334;break;
        default: sum=0;break;
    } 

    flag=Leap_year(year);

    if(flag==1)
    {
        sum=sum+day+1;
        printf("sum=%d",sum);
    }
    else
    {
        sum=sum+day;
        printf("sum=%d",sum);
    }
    
    return 0;
}