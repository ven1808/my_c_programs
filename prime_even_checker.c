// Program to check if a number is prime/composite or even/odd

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, choice, i, is_prime;
    char ch;

    do {
        system("cls"); // Use "clear" instead of "cls" on Linux/macOS
        //cls is used to clear the screen before showing the new output each time the loop runs. It's like wiping your whiteboard before writing on it again 

        printf("Enter a number: ");
        scanf("%d", &num);

        printf("\nChoose an operation:\n");
        printf("1. Check if the number is Prime or Composite\n");
        printf("2. Check if the number is Even or Odd\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou chose: Prime or Composite Check\n");
                if (num <= 1) {
                    printf("The number %d is neither prime nor composite.\n", num);
                } else {
                    is_prime = 1;
                    for (i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                    if (is_prime)
                        printf("%d is a prime number.\n", num);
                    else
                        printf("%d is a composite number.\n", num);
                }
                break;

            case 2:
                printf("\nYou chose: Even or Odd Check\n");
                if (num % 2 == 0)
                    printf("%d is an even number.\n", num);
                else
                    printf("%d is an odd number.\n", num);
                break;

            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch); // Leading space clears leftover newline
    } while (ch == 'y' || ch == 'Y');

    printf("Exiting the program.\n");
    return 0;
}
