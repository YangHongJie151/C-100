
//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include<stdio.h>

void fun(int n)
{
    int next;
    if(n<=1)
    {
        next=getchar();
        printf("reserve character:");
        putchar(next);
    }
    else
    {
        next=getchar();
        fun(n-1);
        putchar(next);
    }


}

int main()
{
    
    int n=5;
    printf("please input 5 character:");
    fun(n);

    return 0;
}