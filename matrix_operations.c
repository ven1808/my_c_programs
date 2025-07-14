// C program to perform addition, subtraction, and transpose on 3x3 matrices

#include <stdio.h>
#include <stdlib.h>

// Function to add two 3x3 matrices
void add(int m[3][3], int n[3][3], int sum[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }
}

// Function to subtract two 3x3 matrices
void sub(int m[3][3], int n[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = m[i][j] - n[i][j];
        }
    }
}

// Function to find the transpose of a 3x3 matrix
void transpose(int m[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = m[i][j];  // Flip row and column
        }
    }
}

// Function to display a 3x3 matrix
void display(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int a[3][3] = { {2, 6, 2}, {1, 8, 10}, {2, 1, 2} };
    int b[3][3] = { {1, 2, 3}, {4, 5, 6}, {2, 1, 2} };
    int c[3][3];
    int choice;

    // Display original matrices
    printf("First matrix:\n");
    display(a);
    printf("Second matrix:\n");
    display(b);

    // Menu-driven operations
    do {
        printf("\nChoose the matrix operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Transpose of the first matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(a, b, c);
                printf("Sum of matrices:\n");
                display(c);
                break;

            case 2:
                sub(a, b, c);
                printf("Subtraction of matrices (A - B):\n");
                display(c);
                break;

            case 3:
                transpose(a, c);
                printf("Transpose of the first matrix:\n");
                display(c);
                break;

            case 4:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid input. Please enter 1 to 4.\n");
        }

    } while (1);

    return 0;
}
