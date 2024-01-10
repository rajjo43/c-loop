#include<stdio.h>
int main()
{
    int r,c,n,p=1;
    printf("Enter:\n");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n-r; c++)
        printf(" ");
        for(c=1;c<=r;c++){
        if(c==1 || r==1)
        printf("%d",p);
        p=1;
        else
        p=p*(r-c+1)/c;
        
        printf("%4d",p);}
        printf("\n");
    }return 0;
   }