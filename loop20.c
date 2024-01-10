#include<stdio.h>
int main()
{
    int r,c,n;
    printf("How many rows of square?\n");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n;c++)
        if(c==n || r==c)
        printf("#");
        else
        printf("*");
        printf("\n");
    }
}