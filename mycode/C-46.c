

//题目：宏#define命令练习。


#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(X) ((X)*(X))

int main()
{
    int input=TRUE;
    int num;

    while(input)
    {
        printf("please input a number:\n");
        scanf("%d",&num);
        printf("%d\n",SQ(num));
        if(num>=50)
        {
            input=TRUE;
        }
        if(num<50)
        {
            input=FALSE;
        }
        
    }
    
    return 0;
}