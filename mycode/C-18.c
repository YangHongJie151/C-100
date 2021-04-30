
//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
//程序分析：关键是计算出每一项的值。


#include<stdio.h>
#include<math.h>

int main()
{
    int num,n;
    int i,temp,sum=0;

    printf("please input number and power:");
    scanf("%d%d",&num,&n);

    temp=num;
    for(i=n;i>0;i--)
    {
        sum=sum+temp;
        temp=temp*10+num;
        
    }
    printf("sum=%d\n",sum);

    
    return 0;
}
