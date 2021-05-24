
//题目：学习使用auto定义变量的用法。

#include<stdio.h>

#define NUM 1

int main()
{
    int num=NUM;
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d \n",num);
        num++;

        {
            auto int num=10;
            int j;
            printf("%d \n",num);
            num++;
        }
    }
    return 0;
}