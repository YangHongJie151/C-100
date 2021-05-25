#include<stdio.h>
#include"C-50.h"

int main()
{
    int a;
    int b;
    printf("please input two number:");
    scanf("%d%d",&a,&b);

    if(a GT b)
    {
        printf("%d\n",a);
    }
    else if(a LT b)
    {
        printf("%d\n",b);
    }
    else if(a EQ b)
    {
        PRINTF(a);
        PRINTF(b);
    }
    else
    {
        printf("no input!\n");
    }


    return 0;
}