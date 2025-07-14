// A C program to find the square of a given number

#include <stdio.h>

// Function to find square of a number
int square(int n) {
    return n * n;
}

int main() {
    int num;

    printf("Enter the number to find its square: ");
    scanf("%d", &num);

    printf("The square of %d is %d\n", num, square(num));

    return 0;
}
