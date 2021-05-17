
//题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。



#include<stdio.h>

char* Del_Letter( char *ps, char ch)
{
    char *pc=ps;
    
    while(*ps!='\0')
    {
        char *pa=ps;
        if(*pa==ch)
        {
            while(*pa!='\0')//把后面得都向前移一位
            {
                *pa=*(pa+1);
                pa++;
            }  
        }
        else//连续出现相同得字母，再次进行判断
        {
            ps++;
        }
    }
    return pc;
}


int main()
{
    char arr[20]={0};
    printf("please input character string:");
    scanf("%s",arr);

    char *p=arr;

    p=Del_Letter(arr,'a');

    printf("Now:%s\n",p);

    return 0;
}