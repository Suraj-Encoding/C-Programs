// Program to reverse a number
#include <stdio.h>

// Logic to reverse
int reverse(int n){
    int rev=0,rem;
    while(n!=0){
        // rem = n-(n/10)*10;
        rem = n%10;  // gives you a remainder (last digit) of that number
        rev = rev*10+rem;  // Generating reverse number
        n=n/10; // update value of n
    }
   return rev;
}

int main()
{
    // Example: 3985(no) -> 5893(rev)
    int n;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    int rev = reverse(n);
    printf("Reverse number is: %d\n",rev);
    return 0;
}