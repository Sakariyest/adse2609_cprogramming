/* This program accepts three numbers from the user,compares them, and displays the largest and smallest numbers. */

//pre-processor directive
#include <stdio.h>

//main function provides the entry point to the program
int main() {

    //variables to be used in the program
    int a, b, c, largest, smallest;

    //prompt the user to enter three numbers
    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    //Determine the largest number
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    //Determine the smallest number
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    //Display the largest and smallest numbers
    printf("\nResults");
    printf("\n-------------------------");
    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d", smallest);
    printf("\n-------------------------\n");

    return 0;
}
