

//题目：对10个数进行排序。

//程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。


#include<stdio.h>

void sort(int *arr,int num)
{
    int i,j,temp;
    for(i=0;i<num-1;i++)
    {
        for(j=1;j<=num-i-1;j++)
        {
            if(arr[i]>arr[i+j])
            {
                temp=arr[i+j];
                arr[i+j]=arr[i];
                arr[i]=temp;
            }
        }

    }

}

int main()
{
    int arr[]={1000,12,4,6,12,3,9,7,8,95};
    int num=sizeof(arr)/sizeof(arr[0]);

    sort(arr,num);

    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}