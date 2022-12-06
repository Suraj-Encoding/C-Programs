// Pattern 5 ->  Inverted half pyramid of numbers (right sided) -> (N-1)
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter rows: ");
    scanf("%d",&n);
    printf("Number pattern 1: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { 
          if(j>=i) 
             printf("%d ",i);
          else 
             printf("  ");
        }
       printf("\n");
    }
    return 0;
}