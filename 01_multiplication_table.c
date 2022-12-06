// Program to generate multiplication table of a given number
#include <stdio.h>
int main()
{
    int n,i;
    printf("\nEnter a number whose multiplication table you want to print: ");
    scanf("%d",&n);
    printf("Multiplication table of %d is: \n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}