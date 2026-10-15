#include<stdio.h>
int main()
{
    int a[6]= {101, 205, 103, 205, 101};
    int i,j;

    for(i=0;i<=5;i++)
    {
        a[i];
        for(j=i+1;j<=5;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d id Duplicate ID!", a[j]);
                printf("\n");
            }
        }
    }
}