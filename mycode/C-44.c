
//题目：学习使用external的用法。

#include<stdio.h>

int a,b,c;

void fun(void)
{
    int a;
    a=2;
    c=a+b;
}


int main()
{
    a=b=1;
    fun();
    printf("c=%d\n",c);

    return 0;
}