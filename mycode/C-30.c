

//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include<stdio.h>

int fun(int num)
{
    int a,b,c,d,e;
    a=num/10000;
    b=num/1000%10;
    c=num/100%10;
    d=num/10%10;
    e=num%10;

    if((a==e)&&(b==d))
    {
        return 1;
    }
    else
    {
        return -1;
    } 
}


int main()
{
    int num,ret;
    printf("please input five number:");
    scanf("%d",&num);
     if(num<10000 || num>99999)
    {
        printf("input error!");
        return 0;
    }
    
    ret=fun(num);
   
    if(1==ret)//根据返回值判断是否为回文数
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}