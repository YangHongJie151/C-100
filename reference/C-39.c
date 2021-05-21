#include<stdio.h>
int main()
{
    int a[11]={1,4,6,9,13,16,19,28,40,100};
    int temp1,temp2,number,end,i,j;
    printf("原始数组是:\n");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
    printf("\n插入一个新的数字: ");
    scanf("%d",&number);
    end=a[9];
    if(number>end)
        a[10]=number;
    else
    {
        for(i=0;i<10;i++)
        {
            if(a[i]>number)//这里遍历出比number大的a[i]，然后将number插入a[i]这个地方
            {
                temp1=a[i];
                a[i]=number;//这里将a[i]的值抽离出来，进行和后面的数据的推移
                for(j=i+1;j<11;j++)
                {
                    temp2=a[j];//将下一个值给抽离出来
                    a[j]=temp1;//将之前的抽离出来的a[i]值放入
                    temp1=temp2;//放入temp，多次循环，直到最后
                }
                break;
            }
        }
    }
    for(i=0;i<11;i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}