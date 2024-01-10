#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers you want to calculate:\n");
    scanf("%d",&n);
    printf("The summation of the number is: %.2f",((n*(n+1))/2.0));
}