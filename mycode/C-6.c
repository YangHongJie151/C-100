
//题目：用*号输出字母C的图案。
//程序分析：可先用'*'号在纸上写出字母C，再分行输出。



#define row 16
#define cow 8

#include<stdio.h>

int main()
{
    int temp=0;
    int i,j;

    temp=row/2;

    for(i=0;i<row;i++)
    {
       if(i<temp)
       {
           for(j=0;j<cow;j++)
           {
               if(j==cow-i)
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }
           }
       }
       else
       {
           for(j=0;j<cow;j++)
           {
               if(j==i-temp)
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }
           }

       }
        printf("\n");
    }
    return 0;
}