
//题目：宏#define命令练习3。


#include<stdio.h>
#define GT >
#define LT <
#define EQ ==

int main()
{
    int one,two;
    printf("please input two number:");
    scanf("%d%d",&one,&two);

    if(one GT two)
    {
        printf("one greater than two!\n");
    }
    else if(one LT two)
    {
        printf("one less than two!\n");
    }
    else if(one EQ two)
    {
        printf("one equal to two!\n");
    }


    return 0;
}