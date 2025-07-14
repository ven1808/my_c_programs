// A C program to accept a string from the console and reverse the string on the console (without using built-in functions).

#include <stdio.h>

int main()
{
    char str[30],rev[30];
    int i,j; 
    int length = 0 ;
    
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    
    while(str[length] != '\0')
    {
        length++;
    }
    
    j = length -1;
    
    for(i=0;i<length;i++)
    {
        rev[i] = str[j];
        j--;
    }
    
    printf("Reverse of the string is %s\n", rev);
    
    return 0;
}
