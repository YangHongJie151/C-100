//题目：#if #ifdef和#ifndef的综合应用。

#include<stdio.h>
#define MAX
#define MAXMUM(X,Y) ((X>Y)?X:Y)
#define MINMUM(X,Y) ((X>Y)?Y:X) 

int main()
{
    int a=10;
    int b=20;

#ifdef MAX
    printf("1.MAXMUM=%d\n",MAXMUM(a,b));
#else
    printf("1.MINMUM=%d\n",MINMUM(a,b));
#endif




#ifndef MAX
    printf("2.MAXMUM=%d\n",MAXMUM(a,b));
#else
    printf("2.MINMUM=%d\n",MINMUM(a,b));
#endif



#ifdef MIN
    printf("3.MAXMUM=%d\n",MAXMUM(a,b));
#else
    printf("3.MINMUM=%d\n",MINMUM(a,b));
#endif



#ifndef MIN
    printf("4.MAXMUM=%d\n",MAXMUM(a,b));
#else
    printf("4.MINMUM=%d\n",MINMUM(a,b));
#endif



    return 0;
}