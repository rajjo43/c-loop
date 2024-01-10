#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter n:\n");
    scanf("%d",&n);

    for(r=1; r<=n ; r++)
    {
        for(c=1; c<=n-r; c++)
        printf(" ");
        for(c=1; c<=r; c++)
        printf("* ");
        printf("\n");
    }
     for(r=n; r>=1 ; r--)
    {
        for(c=1; c<=n-r; c++)
        printf(" ");
        for(c=1; c<=r; c++)
        printf("* ");
        printf("\n");
    }
}