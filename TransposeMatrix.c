#include <stdio.h>

// Main function to execute the program
int main() {
    int rows, cols;

    // Prompt the user to enter the dimensions of the matrix
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    // Declare the original and transposed matrices
    // Note that the dimensions are swapped for the transposed matrix
    int original_matrix[rows][cols];
    int transposed_matrix[cols][rows];

    // Prompt the user to enter the elements of the original matrix
    printf("\nEnter the elements of the original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &original_matrix[i][j]);
        }
    }

    // Perform the matrix transposition
    // The element at original_matrix[i][j] is moved to transposed_matrix[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed_matrix[j][i] = original_matrix[i][j];
        }
    }

    // Print the original matrix
    printf("\n--- Original Matrix ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", original_matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("\n--- Transposed Matrix ---\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposed_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}