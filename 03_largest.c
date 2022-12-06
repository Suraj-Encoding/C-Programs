// Program to find largest element in an array
#include <stdio.h>
int main()
{
    int n,i,max;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    printf("Entered array is: \n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
       if(a[i]>=max)
         max=a[i];
    }
    printf("\nThe largest element of an array is: %d\n",max);
    return 0;
}