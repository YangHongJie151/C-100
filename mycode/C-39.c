
//题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

//程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。


#include<stdio.h>
#include<windows.h>

typedef struct data_num
{
    int size;
    int arr[20];
}data_num;

void add_num(data_num *p)
{
    int input=1;
    
    while(input)
    {
        printf("*******************************\n");//显示菜单选项
        printf("*****0.Cancel Add     1.Add****\n");
        printf("*******************************\n");
        printf("\n");

        printf("please input:");
        scanf("%d",&input);

        switch (input)//根据提示选项，添加一个数或者取消添加
        {
            case 0:
                    printf("Cancel Add\n");//取消数据的添加
                    break;
            case 1:
                    printf("please input add num:");//输入数据
                    scanf("%d",&(p->arr[p->size]));
                    p->size++;
                    break;

            default :
                    printf("input error\n");
                    break;
        }
    }
    if(p->size==0)
    {
        printf("\n");
        printf("data null\n");
        return;
    }
   
    int i,j,temp;//这里开始对数组额元素进行排序
    for(i=0;i<p->size-1;i++)
    {
        for(j=1;j<=p->size-i-1;j++)
        {
            if(p->arr[i]>p->arr[i+j])
            {
                temp=p->arr[i+j];
                p->arr[i+j]=p->arr[i];
                p->arr[i]=temp;
            }
        }
    }

    printf("\n");
    printf("After ordering:");//这里开始输出显示排序后的元素
    for(i=0;i<p->size;i++)
    {
        printf("%d ",p->arr[i]);
    }

}

int main()
{
    data_num s={0};
    add_num(&s);
    system("pause");
    return 0;
}