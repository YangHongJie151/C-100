
//题目：打印出如下图案（菱形）。
/*    *
     ***
    *****
   *******
    *****
     ***
      *
*/

#include<stdio.h>

int main()
{

    int i,j,k,num,temp;

    printf("please print line number:");
    scanf("%d",&num);
    temp=num/2+1;

    for(i=1;i<=temp;i++)//菱形的上半部分
    {
        for(j=1;j<=temp-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=temp-1;i>0;i--)//菱形的下半部分，比上面少一行
    {
        for(j=1;j<=temp-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}