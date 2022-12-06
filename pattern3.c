// Pattern 3 -> Full pyramid of stars -> (S-3)
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter rows: ");
    scanf("%d",&n);
    printf("Star pattern 3: \n");
    
    // # Easy way
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        { 
          if((i+j)<= n )
             printf(" "); // !changed
          else 
             printf("* ");
        }
       printf("\n");
    }
   
   // # Alternate Way
//    for(i=1;i<=n;i++)
//     {
//        for(j=1;j<2*n;j++)
//         { 
//           if(j>= n-(i-1) && j<= n+(i-1) )  // <- Imp Step
//            printf("* ");
//           else 
//              printf("  "); 
//         }
//        printf("\n");
//     }

    return 0;
}