#include<stdio.h>
int main()
{
    int matrix[3][4]= { {10,20,30,40} , {20,10,30,80} , {20,30,40,40} };
    int i,j,a,b;
    int sum=0;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            sum +=matrix[i][j];
        }
        printf("Sum is %d \n", sum);
    }
    
}