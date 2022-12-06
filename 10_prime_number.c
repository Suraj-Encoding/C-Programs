// Program to find prime number
#include <stdio.h>

// Prime Function 
int IsPrime(int n)
{   
    int i;  
    for(i=2;i*i<=n;i++)  // Best solution -> In O(root n)
    {                    // Bad solution -> (i=2 to i<n) -> In O(n) 
        if(n%i==0)
          return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    // As 1 is a unique number
    if(n<=1){
       printf("The number %d is neither prime nor composite.\n",n);
       return 0;
    } 
    // call prime function  
    int val = IsPrime(n);
    if(val==1)
      printf("The number %d is prime.\n",n);
    else
      printf("The number %d is not prime.\n",n);
    return 0;
}