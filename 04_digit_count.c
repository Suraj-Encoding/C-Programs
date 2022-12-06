// Program to count number of digits in an Integer
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    // Base condition
    if(n==0){
        printf("There is only 1 digit in your number.\n");
        return 0;
    }
    // while loop for counter  
    while(n!=0){   // OR while(n)
        n=n/10;    // OR n/=10
        count++;
    }
    printf("There are %d digits in your number.\n",count);
    return 0;
}