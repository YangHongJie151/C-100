
//题目：求一个3*3矩阵对角线元素之和

//程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。


#include<stdio.h>
#define row 5
#define cow 5
 

int Sum_arr(int (*p)[cow])//定义一个大小为3的数组指针，接受二维数组地址
{
    int sum=0;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<cow;j++)
        {
            if((i+j)==(cow-1)||(i==j))//我求的。。。。四个角和中间的数之和。。。。
            {
                sum=sum+p[i][j];
            }
        }
    }
    return sum;
}




int main()
{
    int arr[row][cow]={0};
    int i,j;
    int sum;

    printf("please input %d*%d number:\n",row,cow);

    for(i=0;i<row;i++)
    {
        for(j=0;j<cow;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    sum=Sum_arr(arr);

    printf("%d\n",sum);

    return 0;
}