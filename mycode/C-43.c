

//题目：学习使用static的另一用法。

#include<stdio.h>

int main()
{
    int i,num=2;
    for(i=0;i<3;i++)
    {
        printf("1.num=%d\n",num);
        num++;

        {
            static int num=1;
            printf("2.num=%d\n",num);
            num++;
        }
    }

    return 0;
}