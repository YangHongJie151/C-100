#include<stdio.h>


/*
题目：企业发放的奖金根据利润提成。

    利润(I)低于或等于10万元时，奖金可提10%；
    利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
    20万到40万之间时，高于20万元的部分，可提成5%；
    40万到60万之间时高于40万元的部分，可提成3%；
    60万到100万之间时，高于60万元的部分，可提成1.5%；
    高于100万元时，超过100万元的部分按1%提成。

从键盘输入当月利润I，求应发放奖金总数？
*/


int main()
{
    double I=0;
    double commission=0;
    printf("please input Bonus:\n");
    scanf("%lf",&I);
    while(1)
    {
        if(I<0)
        {
            printf("Bonus error!please again:\n");
            scanf("%lf",&I);
        }
        else if (I>=0 && I<=10)
        {
            printf("Commission is %lf ten thousand!",I*0.1);
            break;
        }
        else if(I>10 && I<=20)
        {
            printf("Commission is %lf ten thousand!",(I-10)*0.075+10*0.1);
            break;
        }   
        else if (I>20 && I<=40)
        {
            printf("Commission is %lf ten thousand!",(I-20)*0.05+10*0.075+10*0.1);
            break;
        }
        else if (I>40 && I<=60)
        {
            printf("Commission is %lf ten thousand!",(I-40)*0.03+20*0.05+10*0.075+10*0.1);
            break;
        }
        else if (I=60 && I<=100)
        {
            printf("Commission is %lf ten thousand!",(I-60)*0.015+20*0.03+20*0.05+10*0.075+10*0.1);
            break;
        }
        else
        {
           printf("Commission is %lf ten thousand!",(I-100)*0.01+40*0.015+20*0.03+20*0.05+10*0.075+10*0.1);
            break; 
        }
    }
    return 0;
}