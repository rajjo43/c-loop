#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter how many rows of pyramid?\n");
    scanf("%d",&n);

    for(r=n; r>=1; r--)
    {
        for(c=1; c<=n-r; c++)
        printf(" ");
        for(c=1; c<=r; c++)
        printf("* ");
        printf("\n");
    }
}