#include<stdio.h>
int main()
{
    int r, c,n;
    printf("Enter:\n");
    scanf("%d",&n);

    for(r=n; r>=1; r--)
    {
        for(c=1 ; c<=n-r; c++)
        printf(" ");
        for(c=1;c<=2*r-1;c++)
        if(c==1 || r==n || c==2*r-1)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}