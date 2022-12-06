// Program to convert decimal number to binary number
#include <stdio.h>
int main()
{
    int n,rem,dec;
    int a[10],i=0,j;
    printf("\n# Decimal to Binary #\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    dec=n;
    // Base condition
    if(n==0){
       printf("Binary of 0 is: 0\n");
       return 0;
    }
    else if(n<0){
        printf("Wrong Number!\n");
        return 0;
    }
    // Logic to convert Dec to Bin
    while(n){
        rem = n%2;
        n=n/2;
        a[i]=rem;
        // if(n==0)  // #
        //   break;
        i++;
    }
    // printf("%d\n",i);  // Just for cross check
    // for loop to print binary number
    printf("Binary of %d is: ",dec);
    for(j=i-1;j>=0;j--)   // # j=i
    {
        printf("%d",a[j]);
    }
    printf("\n");
    return 0;
}