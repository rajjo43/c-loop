#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The sum of all numbers between 100 & 200 that can be divided by 17 is: ");
    for(i=100;i<=200;i++)
    {
        if(i%17==0)
        {
            sum+=i;
        }
    }printf("%d",sum);
}