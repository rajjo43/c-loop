#include<stdio.h>
int main()
{
    int r,c,n;
    printf("How many rows of numbers?\n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}