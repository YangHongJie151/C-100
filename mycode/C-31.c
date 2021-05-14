
//题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。


#include<stdio.h>


int main()
{
    char input,second;
    printf("please input initial:\n");
    scanf("%c",&input);

    switch(input)
    {
        case 'M':printf("Mondey\n");break;//判断星期一
        case 'T':printf("please input second letter:\n");//判断星期二和星期四
                getchar();//吃掉回车
                scanf("%c",&second);
                switch(second)
                {
                    case 'u':printf("Tuesday\n");break;
                    case 'h':printf("Thursday\n");break;
                    default :printf("There is no such day\n");break;
                }
                break;     
        case 'W':printf("Wednesday");break;//判断星期三
        case 'F':printf("Friday");break;//判断星期五
        case 'S':printf("please input second letter:\n");//判断星期六和星期天
                getchar();
                scanf("%c",&second);
                switch(second)
                {
                    case 'a':printf("Saturday\n");break;
                    case 'u':printf("Sunday\n");break;
                    default :printf("There is no such day\n");break;
                }
                break;
        default:printf("error!");break;
    }

    return 0;
}