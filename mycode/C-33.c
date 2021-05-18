
//题目：判断一个数字是否为质数。

//程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
#include<stdio.h>
#include<math.h>

int main()
{
    int input,temp;
    int i;
    printf("please input a number:\n");
    scanf("%d",&input);

    temp=(int)sqrt(input);

    for(i=2;i<=temp;i++)
    {
        if((input%i)==0)
        {
            printf("No\n");
            break;
        }
        if(i==temp)
        {
            printf("Yes\n");
        }

    }

    return 0;
}