#include<stdio.h>
int main()
{
    int matrix[3][4]= { {10,20,30,40} , {20,10,30,80} , {20,30,40,40} };
    int max,i,j,a,b;

    max= matrix[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(matrix[i][j] > max)
            {
                max=matrix[i][j];
                a=i+1;
                b=j+1;
            }
        }
    }
    printf("MAX is matrix[%d][%d] %d",a, b, max);
}