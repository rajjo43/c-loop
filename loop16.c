#include<stdio.h>
int main()
{
    int r,c,n;
    printf("How many rows of right triangle?\n");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}