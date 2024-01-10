#include<stdio.h>
int main()
{
    int r,c,i,R,C;
    printf("How many rows:\n");
    scanf("%d",&R);
    printf("Number of colums:\n");
    scanf("%d",&C);
    
    for(r=0;r<R;r++)
    {
        for(c=0;c<C;c++)
        {
            printf("(%d,%d) ",r,c);
        }
        printf("\n");
    }

}