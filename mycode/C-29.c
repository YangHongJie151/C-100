

//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

#include<stdio.h>

static int count;
void fun(int num)
{
    count++;
    printf("%d",num%10);
    if(num>9)
    { 
        fun(num/10);
    }
}



int main()
{
    int num;
    printf("please input number:");//输入数字
    scanf("%d",&num);

    if(num<0 || num>99999)
    {
        printf("input error!");
        return 0;
    }
    else
    {
        fun(num);
        printf("\n");
        printf("count=%d\n",count);
    }
    
    return 0;
}