#include<stdio.h>
int main()
{
    int r,c,n;
    printf("Enter:\n");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        printf("%d ",r%2);
        printf("\n");
    }
}