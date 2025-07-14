// A C program to accept a string from the console and display
// the total number of characters in the string (with and without spaces),
// without using built-in functions

#include <stdio.h>

int main() {
    char str[100];
    int total_chars_with_space = 0;
    int total_chars_wo_space = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break; // Stop at newline
        }

        total_chars_with_space++;

        if (str[i] != ' ') {
            total_chars_wo_space++;
        }
    }

    printf("Total characters (with spaces): %d\n", total_chars_with_space);
    printf("Total characters (without spaces): %d\n", total_chars_wo_space);

    return 0;
}
