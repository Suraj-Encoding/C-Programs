// Pattern 4 ->  Inverted half pyramid of stars (right sided) -> (S-4)
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter rows: ");
    scanf("%d",&n);
    printf("Star pattern 4: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        { 
          if(j>=i) 
             printf("* ");
          else 
             printf("  ");
        }
       printf("\n");
    }
    return 0;
}