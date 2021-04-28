
//题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
//程序分析：(a>b)?a:b这是条件运算符的基本例子。

#include<stdio.h>

int main()
{
    int num;
    char score=0;

    printf("please input score:");
    scanf("%d",&num);

    score=(num>=90)?'A':(num>=60?'B':'C');

    printf("score=%c\n",score);

    return 0;
}