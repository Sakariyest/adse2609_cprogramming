/* This program asks the user to enter a positive integer and then displays its multiplication table from 1 to 12. */

#include <stdio.h>

int main() {
    // Declare variables
    int number, i, result;

    // Ask the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check whether the entered number is positive
    if (number <= 0) {
        printf("Error: Please enter a positive integer greater than zero.\n");
    } else {
        // Display the multiplication table heading
        printf("\nMultiplication table for %d\n", number);
        printf("--------------------------\n");

        // Use a for loop to generate the table from 1 to 12
        for (i = 1; i <= 12; i++) {
            // Calculate the multiplication result
            result = number * i;

            // Display the multiplication equation
            printf("%d x %2d = %d\n", number, i, result);
        }
    }

    return 0;
}
