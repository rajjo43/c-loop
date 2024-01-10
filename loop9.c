#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The sum of all integers greater than 100 and less than 200 that are divisible by 7 is : ");
    for(i=101;i<200;i++)
    {
        if(i%7==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}