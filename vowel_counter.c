// A C program to accept a string and display the number of vowels using a function (no built-in functions used)

#include <stdio.h>

// Function to count vowels in a string
int count_vowels(char str[]) {
    int vowels = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U') {
            vowels++;
        }
    }

    return vowels;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int total_vowels = count_vowels(str);
    printf("The number of vowels in this string is: %d\n", total_vowels);

    return 0;
}
