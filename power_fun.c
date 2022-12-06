// # Power Function
#include <stdio.h>
#include<math.h> // To use power function 
int main()
{
    int x,y;
    long long int result;
    printf("\nEnter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);
    result = pow(x,y); // Power function call
    printf("The value of %d raised to %d is: %lld\n",x,y,result);
    return 0;
}