#include<stdio.h>
int main()
{
    int i,j,n;
    printf("How many rows of square?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
        printf("*");
    }
      printf("\n");
    }
}