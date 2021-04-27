
//题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。




#include<stdio.h>

#define month 40

int main()
{
    int i=0;
    int arr[month]={0};

    arr[0]=1;
    arr[1]=1;

    for(i=0;i<month;i++)
    {
        if(i==0)
        {
            printf("第%d月兔子数：%d\n",i+1,arr[i]);
        }
        else if((i-1)==0)
        {
            printf("第%d月兔子数：%d\n",i+1,arr[i]);
        }
        else
        {
            arr[i]=arr[i-1]+arr[i-2];
            printf("第%d月兔子数：%d\n",i+1,arr[i]);
        }
    }
    return 0;
}