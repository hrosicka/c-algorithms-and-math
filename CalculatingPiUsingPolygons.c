// gcc CalculatingPiUsingPolygons.c -o CalculatingPiUsingPolygons -lm
#include <stdio.h>
#include <math.h>

/**
 * @brief Calculates Pi using the perimeter of a regular polygon inscribed in a unit circle.
 *
 * This function applies the formula: pi ~= n * sin(pi / n), where 'n' is the number of sides.
 * As 'n' approaches infinity, the perimeter of the polygon approaches the circumference
 * of the circle (2 * pi), providing a better approximation of pi.
 *
 * @param sides The number of sides of the polygon.
 * @return The calculated value of Pi as a double.
 */
double calculate_pi_with_polygon(int sides) {
    // M_PI is a constant defined in math.h for the value of Pi
    return sides * sin(M_PI / sides);
}

// Main function to execute the program
int main() {
    // Constant for the minimum number of sides a polygon can have
    const int MIN_SIDES = 3;
    int n_sides;
    double calculated_pi;

    // Prompt the user to enter the number of sides for the polygon
    printf("Enter the number of sides for the polygon (n): ");
    scanf("%d", &n_sides);

    // Check for a valid number of sides
    if (n_sides < MIN_SIDES) {
        printf("A polygon must have at least %d sides. Exiting.\n", MIN_SIDES);
        return 1; // Return with an error code
    }

    // Call the dedicated function to calculate Pi
    calculated_pi = calculate_pi_with_polygon(n_sides);

    // Print the calculated value and compare it to the actual value
    printf("\n--- Calculation Results ---\n");
    printf("Calculated Pi with a %d-sided polygon: %lf\n", n_sides, calculated_pi);
    printf("Actual value of Pi (from math.h):     %lf\n", M_PI);
    printf("Difference:                           %lf\n", M_PI - calculated_pi);

    return 0; // Return with a success code
}