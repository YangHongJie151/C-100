

//题目：利用递归方法求5!。


#include<stdio.h>

int fun(int n)
{
    int num;
    if(1==n)
    {
     return 1;
    }
    num=fun(n-1)*n;
    
    return  num;
}


int main()
{
    int ret,num;
    printf("please input a number:");
    scanf("%d",&num);

    ret=fun(num);

    printf("%d!=%d\n",num,ret);

    return 0;
}