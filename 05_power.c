// Program to calculate power of a number -> (Make your own power function)
#include <stdio.h>
int main()
{
    int m,n,i;
    long long int val=1;
    printf("\nEnter the base: ");
    scanf("%d",&m);
    printf("Enter the power: ");
    scanf("%d",&n);
    // using for loop
    for(i=0;i<n;i++)
    {   
        val = val*m;
    }
    // val =  m raised to n
    printf("The value of %d to the power %d is: %lld\n",m,n,val);
    
    // using while loop
    // int t=n;
    // while(n!=0){
    //     val*=m;
    //     n--;
    // }
    // printf("The value of %d to the power %d is: %lld\n",m,t,val);
    return 0;
}