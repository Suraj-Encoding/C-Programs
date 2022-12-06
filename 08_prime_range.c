// Program to print prime numbers in a given range
#include <stdio.h>

// Function -> which returns either 0 or 1
int IsPrime(int n)
{   
    // As 1 is not a prime number
    if(n==1)
       return 0;
    // for loop for checking prime number  
    for(int i=2;i*i<=n;i++)   // i<n (Bad) OR i*i<=n (Best)
    {
        if(n%i == 0)
          return 0;
    }
    return 1;
}

int main()
{
    int n1,n2,i;
    // Enter the range
    printf("\nEnter Range:\n");
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter last number: ");
    scanf("%d",&n2);
    // for loop
    printf("The prime numbers in the range of %d to %d are:\n",n1,n2);
    for(i=n1;i<=n2;i++)
    {   
        if(IsPrime(i))  
         {
             printf("%d ",i);
         }
    }
    printf("\n");
    return 0;
}