#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter NO OF TABLES: ");
    scanf("%d:", & n);

    for (i=1;i<=n;i++)
    {
        printf("%d: ", i);
        for(j=1;j<=10;j++)
        {
            k=i*j;
            printf("%d ", k);
        }
        printf("\n");
    }
}