#include<stdio.h>
int main()
{
    int r,c,n;
    char ch='A';
    printf("Enter:\n");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        printf("%c ",ch);
        ch++;
        printf("\n");
    }
}
