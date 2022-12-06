// Program to reverse a string
#include <stdio.h>
#include<string.h>  // for string functions
int main()
{
    char str[20]; // char array
    int count=0,len,i;

    // Enter the string
    printf("\nEnter the string: ");
    scanf("%s",str);

    // Find length - using string function
    len = strlen(str);
    printf("Length of the string is: %d\n",len);

    // Find length - using while loop (own logic)
     while(str[count] != '\0'){
         count++;
     }
    printf("Length of the string is: %d\n",count);

    // Reverse the string
    for(i=0;i<len/2;i++)
    { 
       char t;  // temp variable
       t = str[i];
       str[i] = str[len-1-i];
       str[len-1-i] = t;
       // OR  
       // t = str[i];
       // str[i] = str[count-1];
       // str[count-1] = t;
       // count--;
    }
    printf("Reversed string is: %s\n",str);
    return 0;
}