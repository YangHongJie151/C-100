//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。


#include<stdio.h>
#include<string.h>

char* Reserve(char *p,unsigned int Length)
{
    unsigned int Left,Right;
    int i;
    char temp;

    Left=0;
    Right=Length-1;

    for(i=0;i<Length-1;i++)
    {
        if(Left>Right)
        {
            break;
        }
        else
        {
            temp=p[Right];
            p[Right]=p[Left];
            p[Left]=temp;
        }
        Left++;
        Right--;
    }
    return p;
}

int main()
{
    unsigned int Length;
    char* pa;
    char arr[]="www.runoob.com";

    Length=strlen(arr);//计算整个字符串的长度
    pa=Reserve(arr,Length);//将字符串倒序

    printf("%s\n",pa);

    return 0;
}