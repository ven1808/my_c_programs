// A C program to accept a string from the console and copy one string into another
// without using built-in functions like strcpy()

#include <stdio.h>

// Custom function to copy a string
void string_copy(char source[], char destination[]) {
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Don't forget to add null terminator because in C, strings with characters end with a null terminator
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    // Optional: remove newline character from fgets if needed
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    string_copy(str1, str2);

    printf("The copied string is: %s\n", str2);

    return 0;
}
