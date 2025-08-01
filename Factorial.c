#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else if (number == 0) {
        printf("The factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("The factorial of %d is: %lld\n", number, factorial);
    }

    // Wait for the user to press Enter before exiting.
    printf("\nPress Enter to exit the program...");
    
    // Clear the input buffer from the previous `scanf`.
    // This part can be tricky and platform-dependent.
    // A safer way is to use a loop to consume characters.
    while (getchar() != '\n'); 
    getchar(); // Reads the final newline character.

    return 0;
}