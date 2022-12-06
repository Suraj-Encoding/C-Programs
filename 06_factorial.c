// Program to calculate factorial of a number
#include <stdio.h>

// Recursive approach
int factorial_Rescursive(int n){
    if(n==0 || n==1)
       return 1;
    else 
       return n*factorial_Rescursive(n-1);
}

// Iterative approach
int factorial_Iterative(int n)
{   
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int n,fact,fact1;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of a negative number does not exist!\n");
        return 0;
    }
    fact = factorial_Rescursive(n);  // Recursive
    fact1 = factorial_Iterative(n); // Iterative
    printf("Recursive - Factorial of %d is: %d\n",n,fact);
    printf("Iterative - Factorial of %d is: %d\n",n,fact1);
    return 0;
}