// Program to generate Fibonacci series up to n terms (non-recursive)

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

   
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
