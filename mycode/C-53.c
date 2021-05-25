
//题目：学习使用按位异或 ^。
//程序分析：0^0=0; 0^1=1; 1^0=1; 1^1=0 。



#include<stdio.h>

int main()
{
    int a=012;//八进制，十进制对应10    二进制对应1010
    int b=0b1101;//二进制，十进制对应13 二进制对应1101
    int c=5;//十进制                   二进制对应0101
    int d=0x0a;//十六进制               二进制对应1010
    int temp;

    temp=a^b;
    printf("Decimalism temp1=%d\n",temp);
    printf("Octonary number system temp1=%o\n",temp);
    printf("Hexadecimal temp1=%x\n",temp);
    printf("\n");

    temp=a^c;
    printf("temp2=%d\n",temp);
    printf("Octonary number system temp2=%o\n",temp);
    printf("Hexadecimal temp2=%x\n",temp);
    printf("\n");

    temp=a^d;
    printf("temp3=%d\n",temp);
    printf("Octonary number system temp3=%o\n",temp);
    printf("Hexadecimal temp3=%x\n",temp);
    printf("\n");

    return 0;
}