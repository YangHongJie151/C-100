
//题目：将一个数组逆序输出。

//程序分析：用第一个与最后一个交换。


#include<stdio.h>


void reverse(int *p,int size)
{
    int left,right,temp;
    left=0;
    right=size-1;
    while(left<right)
    {
        temp=p[left];
        p[left]=p[right];
        p[right]=temp;
        
        left++;
        right--; 
    }
}

int main()
{
    int i,num;
    int arr[]={0,1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17};
    
    num=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,num);

    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}