/* This program determines a student's examination result. */

#include <stdio.h>

int main() {
    // Declare a variable to store the student's mark
    int mark;

    // Ask the user to enter a mark between 0 and 100
    printf("Enter the student's mark (0-100): ");
    scanf("%d", &mark);

    // Check whether the mark is invalid
    if (mark < 0 || mark > 100) {
        printf("Invalid mark! Please enter a mark between 0 and 100.\n");
    }
    // Check whether the student has achieved a distinction
    else if (mark >= 70) {
        printf("Result: Distinction\n");
    }
    // Check whether the student has achieved a credit
    else if (mark >= 60) {
        printf("Result: Credit\n");
    }
    // Check whether the student has achieved a pass
    else if (mark >= 50) {
        printf("Result: Pass\n");
    }
    else {
        printf("Result: Fail\n");
    }

    return 0;
}
