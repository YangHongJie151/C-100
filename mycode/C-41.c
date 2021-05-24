
//题目：学习static定义静态变量的用法。


#include<stdio.h>



void fun1(void)
{
    static int static_i=10;
    printf("fun1_i:%d\n",static_i);
    static_i++;
}
void fun2(void)
{
    int i=10;
    printf("fun1_i:%d\n",i);
    i++;

}
int main()
{
    int j;
    
    for(j=0;j<3;j++)
    {
        fun1();
    }

    for(j=0;j<3;j++)
    {
        fun2();
    }
   
    return 0;
}