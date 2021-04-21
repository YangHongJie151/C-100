#include<stdio.h>

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