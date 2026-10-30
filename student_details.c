//This program stores and displays a student's details.*/
#include <stdio.h>

int main() {
    // Declare and assign the student's age
    int age = 20;

    // Declare and assign the student's average mark
    float average_mark = 85.5;

    // Declare and assign the student's grade
    char grade = 'A';

    // Display the student's age using %d
    printf("Student Age: %d\n", age);

    // Display the average mark using %.2f (two decimal places)
    printf("Average Mark: %.2f\n", average_mark);

    // Display the student's grade using %c
    printf("Student Grade: %c\n", grade);

    // Return 0 to indicate the program ended successfully
    return 0;
}
