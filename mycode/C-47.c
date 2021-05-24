

//题目：宏#define命令练习2。


#include<stdio.h>
#define REVERSE(a,b) {int temp;temp=a;a=b;b=temp;}
int main()
{
    int x,y;
    x=10;
    y=20;
    printf("x=%d,y=%d\n",x,y);

    REVERSE(x,y);
    printf("x=%d,y=%d\n",x,y);

    return 0;
}