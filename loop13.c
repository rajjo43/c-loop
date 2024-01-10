#include<stdio.h>
int main()
{
    int r,c,n;
    printf("How many rows of square?\n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==c)
            printf("$");
            else
            printf("*");
        }
        printf("\n");
    }
}