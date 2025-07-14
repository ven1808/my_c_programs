// Program to convert uppercase to lowercase and vice versa

#include <stdio.h>

int main()
{
    char upper, lower;
    char converted;

    // Convert uppercase to lowercase
    printf("Enter an uppercase letter: ");
    scanf("%c", &upper);

    // Check if it's really an uppercase letter
    if (upper >= 'A' && upper <= 'Z') //Covers all uppercase letters, because: 'A' = 65, 'Z' = 90
    {
        converted = upper + 32;
        printf("Lowercase of %c is %c\n", upper, converted);
    }
    else
    {
        printf("%c is not an uppercase letter.\n", upper);
    }

    // Convert lowercase to uppercase
    printf("Enter a lowercase letter: ");
    scanf(" %c", &lower); // Notice the space before %c to consume newline

    if (lower >= 'a' && lower <= 'z')  //This covers all lowercase English letters because 'a' = 97 and 'z' = 122
    {
        converted = lower - 32;
        printf("Uppercase of %c is %c\n", lower, converted);
    }
    else
    {
        printf("%c is not a lowercase letter.\n", lower);
    }

    return 0;
}
