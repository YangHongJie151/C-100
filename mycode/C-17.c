
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//程序分析：利用while语句,条件为输入的字符不为'\n'。


#include<stdio.h>

int main()
{
    char arr[]="hello world 1234!";
    int count_alphabet=0,count_space=0,count_digits=0,count_other=0;
    char *p=arr;

    while(*p!='\0')
    {
        if((65<=*p&&*p<=90)||(97<=*p&&*p<=122))//对字母计数
        {
            count_alphabet++;
            p++;
            continue;
        }
        if(*p==' ')//对空格计数
        {
            count_space++;
            p++;
            continue;
        }
        if(48<=*p&&*p<=57)//对数字计数
        {
            count_digits++;
            p++;
            continue;
        }
        if(*p!='\0')//对其他字符计数
        {
            count_other++;
            p++;
            continue;
        }
    }
    printf("count_alphabet=%d\n",count_alphabet);
    printf("count_space=%d\n",count_space);
    printf("count_digits=%d\n",count_digits);
    printf("count_other=%d\n",count_other);


    return 0;
}