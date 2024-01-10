#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter how many values you want to add:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The final summation is: %d",sum);
}