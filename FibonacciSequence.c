#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1;
    long long nextTerm = t1 + t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    clock_t start_time = clock();

    // Prints the first two terms of the sequence
    printf("Fibonacci Sequence: %lld, %lld, ", t1, t2);

    // Loop to generate the next terms
    for (i = 3; i <= n; ++i) {
        printf("%lld, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
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
