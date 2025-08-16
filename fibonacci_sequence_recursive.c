#include <stdio.h>
#include <time.h>

// Recursive function declaration
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Recursive step
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    clock_t start_time = clock();

    printf("Fibonacci Sequence: ");

    for (i = 0; i < n; i++) {
        printf("%d, ", fibonacci(i));
    }

    clock_t end_time = clock();
    double cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Time of running: %f s\n", cpu_time_used);

    // Wait for the user to press Enter before exiting.
    printf("\nPress Enter to exit the program...");
    
    // Clear the input buffer from the previous `scanf`.
    // This part can be tricky and platform-dependent.
    // A safer way is to use a loop to consume characters.
    while (getchar() != '\n'); 
    getchar(); // Reads the final newline character.
    
    return 0;
}
