

//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？


#include<stdio.h>

int main()
{
    int i;
    float temp,s=100;
    //printf("please input initial height:\n");
    //scanf("%f",&s);//用scanf()函数不知道咋不行
    //printf("%f",s);

    temp=s;//除第一次，后面的收拾下降、弹起共9次
    for(i=1;i<10;i++)
    {
        temp=temp/2;
        s+=temp*2;
    }

    temp/=2;//第10次上弹是上一次的一半

    printf("Total of journey:%f",s);
    printf("\n");
    printf("Rebound height:%f",temp);
    return 0;
}