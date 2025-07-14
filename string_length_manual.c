// A C program to accept a string and display its length without using built-in functions

#include <stdio.h>

// Function to calculate length of a string
int length_of_string(char str[]) {
    int i = 0, length = 0;

    while (str[i] != '\0') 
    {
        length++;
        i++;
    }

    return length;
}

int main() {
    char str[100];

    // Accept string from user
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);  // Reads entire line including spaces
    //fgets(str, sizeof(str), stdin); this can be used as well

    int len = length_of_string(str);
    printf("The length of the string is: %d\n", len);

    return 0;
}
