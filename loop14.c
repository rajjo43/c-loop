#include<stdio.h>
int main()
{
    int r,c,n;
    printf("How many numbers?\n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==c || r==1 || r==n)
            printf("$");
            else
            printf("*");
        }
        printf("\n");
    }
}