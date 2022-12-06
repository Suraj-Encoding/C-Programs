// Program to find sum of first n natural numbers in O(1)
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    // sum = 1+2+3+4+5+......+n

    // Runs in linear time 
    //  Bad solution -> O(n)
    // for(i=1;i<=n;i++)
    // {  
    //     sum+=i;  // OR sum=sum+i; 
    // }

    // Runs in constant time -> used formula
    sum = n*(n+1)/2;  // Best solution -> O(1)
    printf("The sum of first %d natural numbers is: %d\n",n,sum);
    return 0;
}