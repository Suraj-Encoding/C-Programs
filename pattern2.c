// Pattern 2 -> Half pyramid of stars (right sided) -> (S-2)
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter rows: ");
    scanf("%d",&n);
    printf("Star pattern 2: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        { 
          if((i+j)<= n )
             printf("  ");
          else 
             printf("* ");
        }
       printf("\n");
    }
    return 0;
}