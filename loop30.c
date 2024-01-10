#include<stdio.h>
int main()
{
    int r,c,n,count=0;
    printf("Enter:\n");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        printf("%d",++count);
        printf("\n");
    }
}