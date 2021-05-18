
//题目：求100之内的素数。

//程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。

#include <stdio.h>


void prime(int num)
{
    int i,j;

    for(i=2;i<num;i++)
    {
        if(i==2)//2就是素数
        {
            printf(" %d",i);
            continue;
        }

        for(j=2;j<i;j++)//大于2的开始求模判断是否为素数
        {
            if((i%j)==0)
            {
                break;
            }
        }
        if(j==i)//上面循环完了，此时的i就等于j了，就说明这是个素数
        {
            printf(" %d",i);
        }
    }
}


int main()
{
    int num=100;
    printf("Output 0 between 100 prime number:");
    prime(num);
    return 0;
}